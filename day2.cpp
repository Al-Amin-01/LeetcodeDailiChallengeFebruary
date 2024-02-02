class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> all;
        for(int i=2;i<=9;i++){
            int num=0,x=0;
            for(int j=1;j<=i;j++){
                num*=10;
                num+=j;
                x*=10;
                x+=1;
            }
            while(num< pow(10,i)){
                if(num%10==0) break;
                if(num>=low && num<=high)
                    all.push_back(num);
                    
                
                num+=x;
            }
            

        }
        return all;
    }
};
