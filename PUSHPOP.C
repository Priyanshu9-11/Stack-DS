/*int push(int [],int);
int pop(int [],int *);
int pos = -1;
main()
{
	int s[10];
	int r;
	int num;
	clrscr();
	printf("\n\n\n");
	r = push(s,100);
	r = push(s,200);
	r = push(s,300);
	r = pop(s,&num);
	printf("%d %d\n",r,num);
	r =pop(s,&num);
	printf("%d %d\n",r,num);
	getch();
}
int push(int s[],int num)
{
	if (pos == 9)
	{
		return(0);
	}
	else
	{
		pos++;
		s[pos]=num;
		return(1);
	}
}
int pop(int s[],int *n)
{
	if(pos==-1)
	{
		return(0);
	}
	else
	{
		*n = s[pos];
		pos--;
		return(1);
	}
} */
#include <stdio.h>

int push(int [], int);
int pop(int [], int *);
int pos = -1;

int main()
{
    int s[10], num, r, opt;

    while(1)
    {
        printf("Enter\n 1. Push\n 2. Pop\n 3. Exit\n");
        scanf("%d", &opt);

        switch(opt)
        {
            case 1:
                if(pos == 9)
                {
                    printf("Stack is Full.\n");
                }
                else
                {
                    printf("Enter the number to be inserted: ");
                    scanf("%d", &num); // corrected to use num
                    r = push(s, num);
                    if(r == 1)
                    {
                        printf("Element Pushed Successfully.\n");
                    }
                }
                break;

            case 2:
                r = pop(s, &num);
                if(r == 0)
                {
                    printf("Stack is empty.\n");
                }
                else
                {
                    printf("Element popped is %d\n", num);
                }
                break;

            case 3:
                return 0;

            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    }

    return 0;
}

int push(int s[], int n)
{
    if(pos == 9)
    {
        return 0;
    }
    else
    {
        pos++;
        s[pos] = n;
        return 1;
    }
}

int pop(int s[], int *n)
{
    if(pos == -1)
    {
        return 0;
    }
    else
    {
        *n = s[pos];
        pos--;
        return 1;
    }
}
