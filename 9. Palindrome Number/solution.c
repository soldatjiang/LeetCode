bool isPalindrome(int x) {
    int i;
    int length=0;
    int dights[20];
    int num=x;
    if(num<0)
        return false;
    while(num!=0){
        dights[length]=num%10;
        num/=10;
        length++;
    }
    
    for(i=0;i<length;i++){
        if(dights[i]!=dights[length-i-1])
            return false;
    }
    
    return true;
}