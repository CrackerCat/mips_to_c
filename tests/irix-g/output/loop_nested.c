s32 test(s32 arg0)
{
    s32 sp4;
    s32 sp8;
    s32 spC;

    spC = 0;
    sp8 = 0;
    if (spC < arg0)
    {
loop_1:
        sp4 = 0;
        if (sp4 < arg0)
        {
loop_2:
            sp8 = (s32) (sp8 + (spC * sp4));
            sp4 = (s32) (sp4 + 1);
            if (sp4 < arg0)
            {
                goto loop_2;
            }
        }
        spC = (s32) (spC + 1);
        if (spC < arg0)
        {
            goto loop_1;
        }
    }
    return sp8;
}