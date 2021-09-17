  bool isPalindrome(int x) {
        int s=x;
        long int rev=0;

        while(x>0){
            int lastdigit=x%10;
            rev=rev*10+lastdigit;
            x=x/10;
            }
        
        if(rev==s)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
