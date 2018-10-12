class Solution {
public:
    string intToRoman(int num) {
        int temp=num;
        int dight;
        string ret;
        while(temp>=1000)
        {
            temp-=1000;
            ret+="M";
        }
        dight=temp/100;
        if(dight==4)
            ret+="CD";
        else if(dight==9)
            ret+="CM";
        else if(dight>=5)
        {
            ret+="D";
            if(dight!=5)
            {
                while(dight>5)
                {
                    ret+="C";
                    dight--;
                }
            }
        }
        else
        {
            while(dight>0)
            {
                ret+="C";
                dight--;
            }
        }
        
        temp-=temp/100*100;
        dight=temp/10;
        if(dight==4)
            ret+="XL";
        else if(dight==9)
            ret+="XC";
        else if(dight>=5)
        {
            ret+="L";
            if(dight!=5)
            {
                while(dight>5)
                {
                    ret+="X";
                    dight--;
                }
            }
        }
        else
        {
            while(dight>0)
            {
                ret+="X";
                dight--;
            }
        }
        
        temp-=temp/10*10;
        dight=temp;
        if(dight==4)
            ret+="IV";
        else if(dight==9)
            ret+="IX";
        else if(dight>=5)
        {
            ret+="V";
            if(dight!=5)
            {
                while(dight>5)
                {
                    ret+="I";
                    dight--;
                }
            }
        }
        else
        {
            while(dight>0)
            {
                ret+="I";
                dight--;
            }
        }
        
        return ret;
    }
};