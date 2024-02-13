class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        for(int i = 0; i<num/1000; i++){
            ans += "M";
        }
        num %= 1000;
        if (num%500/100 == 4){
            ans += "C";
            if (num/500){
                ans += "M";
            }
            else {
                ans += "D";
            }
        }
        else{
            if (num/500){
                ans += "D";
                num %= 500;
            }
            for(int i = 0; i<num/100; i++){
                ans += "C";
            }
        }
        num %= 100;
        if (num%50/10 == 4){
            ans += "X";
            if (num/50){
                ans += "C";
            }
            else {
                ans += "L";
            }
        }
        else{
            if (num/50){
                ans += "L";
                num %= 50;
            }
            for(int i = 0; i<num/10; i++){
                ans += "X";
            }
        }
        num %= 10;
        if (num%5 == 4){
            ans += "I";
            if (num/5){
                ans += "X";
            }
            else {
                ans += "V";
            }
        }
        else{
            if (num/5){
                ans += "V";
                num %= 5;
            }
            for(int i = 0; i<num; i++){
                ans += "I";
            }
        }
        return ans;
    }
};