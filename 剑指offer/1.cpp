class Solution {
public:
	void replaceSpace(char *str,int length) {
        int i;
        int cnt = 0 ;
        for (i = 0; i < length; i++) 
        {
            if(*(str+i) == ' ')
            {
                cnt ++;
            }
        }
        for(i=length-1;i>=0 ; i--)
        {
            if(*(str+i) != ' ')
            {
                str[i+2*cnt]=str[i];
            }
            else
            {
                cnt--;
                str.insert(i+2*cnt, '%20');
            } 
        }
	}
};