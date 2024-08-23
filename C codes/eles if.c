int main()
{
    int mark;
    printf("enter your mark:");
    scanf("%d",&mark);
    if(mark>=85 && mark<=100)
    {
        printf("GRADE A");
    }
    else if(mark>=75 && mark<85)
    {
        printf("GRADE B");
    }
    else if(mark>=65 && mark<75)
    {
        printf("GRADE C");
    }
    else if(mark>=55 && mark<65)
    {
        printf("GRADE D");
    }
    else
    {
        printf("YOU ARE FAIL...");
    }
}
