bool isPalindrome(int x) {
    int rev=0;
    int num=x;
    if(x<0)
        return false;
    
    while(num!=0){
        rev*=10;
        rev+=num%10;
        num/=10;
    }
    
    return rev==x;
}

