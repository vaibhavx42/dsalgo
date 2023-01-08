class Solution {
public:
	vector<string> fizzBuzz(int n) {
		vector<string>ans;
		for(int i=1; i<n+1; i++){
			if(i%3==0 && i%5==0){ans.push_back("FizzBuzz");}
			else if(i%3==0){ans.push_back("Fizz");}
			else if(i%5==0){ans.push_back("Buzz");}
			else{
				string x="";
				int z=i;
				while(z){
					x+=to_string(z%10);
					z/=10;
				}
				reverse(x.begin(), x.end());
				ans.push_back(x);
			}
		}
		return ans;
	}
};