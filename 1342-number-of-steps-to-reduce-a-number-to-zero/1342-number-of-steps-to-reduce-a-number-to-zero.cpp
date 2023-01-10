class Solution {
public:
int check(int num,int c){
    if(num==0)return c;
    if(num%2==0)num/=2;
    else num-=1;
    
    return check(num,++c);
}
    int numberOfSteps(int num) {
       return  check(num,0);}
};