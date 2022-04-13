
class Solution
{
public:
    int lastRemaining(int n)
    {
        int start = 1;
        int lenth = n;
        bool left = true;
        int move = 1;
        while (lenth != 1)
        {
            if (left)
            {
                start = start + move;
                move = move * 2;
                left = false;
                lenth = lenth / 2;
            }
            else
            {
                if (lenth % 2)
                {
                    start = start + move;
                    move = move * 2;
                    left = true;
                    lenth = lenth / 2;
                }
                else
                {
                    move = move * 2;
                    left = true;
                    lenth = lenth / 2;
                }
            }
        }
        return start;
    }
};
