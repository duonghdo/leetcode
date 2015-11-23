class Solution{
public:
	int addDigits(int num){
		while(num > 9){
			int tmp = 0;
			while(num){
				int digit = num % 10;
				tmp += digit;
				num /= 10;
			}
			num = tmp;
		}

		return num;
	}
};