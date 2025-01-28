#include<stdio.h>
struct str
{
    int x ,y;
};
void print(struct str s[2])
{
   for(int i=0;i<2;i++){ printf("%d %d",s[i].x,s[i].y);
    printf("\n");}
   
}
int main()
{
    struct str arr[2]={{1,2},{4,5}};
    print(arr);
}