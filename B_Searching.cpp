#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n,x;
    int a[100000+5];

    scanf("%d",&n);
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
    scanf("%d",&x);
    
    bool paisi = false; // flag | & >> << ^ ~
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("%d",i);
            paisi = true;
            break;
        }
    }
    if(paisi == false)
    {
        printf("-1");
    }

}