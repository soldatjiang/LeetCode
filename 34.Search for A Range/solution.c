/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* ret=(int*)malloc(2*sizeof(int));
    ret[0]=-1;
    ret[1]=-1;
    *returnSize=2;
    if(numsSize==0)
        return ret;

    int l,r,m=0;
    int t=-1;
    int i;
    l=0;
    r=numsSize-1;
    while(l<r && nums[l]<target && nums[r]>target)
    {
        m=(l+r)/2;
        if(nums[m]<target)
            l=m+1;
        else if(nums[m]>target)
            r=m-1;
        else
            break;
    }

    if(nums[l]==target)
        t=l;
    if(nums[r]==target)
        t=r;
    if(nums[m]==target)
        t=m;

    if(t>=0)
    {
        for(i=t;nums[i]==target && i>=0;i--);
        ret[0]=i+1;
        for(i=t;nums[i]==target && i<numsSize;i++);
        ret[1]=i-1;
    }

    return ret;
}