class Solution {
public:
    bool isPalindrome(int x) {
       long long  int d=x,m=0,z;
		for (int i = x; i > 0; i=i/10)
		{z=i%10;
	     m=m*10+z;
			
		}
		if(d==m)
        {
            return true;
        }
        else{
            return false;
        }


    }
};