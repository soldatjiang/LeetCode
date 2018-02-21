bool repeat(char* s,int begin, int end){
    int i;
    for(i=end-1;i>=begin;i--){
        if(s[end]==s[i])
            return true;
    }
    
    return false;
}

int lengthOfLongestSubstring(char* s) {
    int ret=0;
    int length=0;
    int i,j;
    
    for(i=0;s[i]!='\0';i++){
        j=i+1;
        length=1;
        while(s[j]!='\0' && !repeat(s,i,j)){
            length++;
            j++;
        }
        
        if(length>ret)
            ret=length;
    }
    
    return ret;
}

