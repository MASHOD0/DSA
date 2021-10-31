/*Program in C to convert a given valid parenthesized infix arithmetic expression to postfix expression and then print both the expressions. 
The expression consists of single character operands and the binary operators +, - , * , / */
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

void push(char,int *, char[]);
int pop(int*,char[]);
int prior(char x);


void main()
{
	char infix[15], postfix[15],s[12];
	int i,j=0,top=-1;
	//clrscr();
	printf("Enter an valid infix expression:\n");
	gets(infix);
	push('#',&top,s);
	for(i=0;i<strlen(infix);i++)
	{
		if(isalnum(infix[i]))
		postfix[j++]=infix[i];
		else if(infix[i]=='(')
		push(infix[i],&top,s);
		else if(infix[i]==')')
		{
			while(s[top]!='(')
			postfix[j++]=pop(&top,s);
			pop(&top,s);
		}
		else
		{
			while(prior(s[top])>=prior(infix[i]))
			postfix[j++]=pop(&top,s);
			push(infix[i],&top,s);
		}
   }
   while(s[top]!='#')
	postfix[j++]=pop(&top,s);
	postfix[j]='\0';
	printf("\nPostfix expression is:\n");
   puts(postfix);
   getch();
}
void push(char x,int *top, char s[])
{

	s[++(*top)]=x;
}

int pop(int *top, char s[])
{
	return(s[(*top)--]);
}
int prior(char x)
{
	int p;
	if(x=='('||x=='#') p=1;
	if(x=='+'||x=='-') p=2;
	if(x=='*'||x=='/') p=3;
	if(x=='^'||x=='$') p=4;
	return p;
}

