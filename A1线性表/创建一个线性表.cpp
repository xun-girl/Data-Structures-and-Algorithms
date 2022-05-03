#include<stdio.h>
#define N 10
typedef int SLDataType;//这里利用typedef的特性讲整形声明符命名为SDataType
typedef struct//创建顺序表
{
    SLDataType array[N];//实质上就是一个数组
    int size;//数组的长度
}SeqList;//这里的SeqList是类型不是变量
void SeqListInit(SeqList &L)//输入顺序表的值,&l这里是一个引用运算符，相当于给这个L起了一个绰号
{
    int i,n;//n这里是线性表的长度
    printf("请输入线性表的长度:");
    scanf("%d",&n);
    L.size=n;//讲n赋值给L.size
    printf("输入数据:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&L.array[i]);//原理很简单这里就给数组元素逐个赋值利用循环
    }
}
void SeqListDestory(SeqList L)//打印顺序表的值，这里是声明一个结构体变量
{
    int i=0;
    printf("输出数据:");
    for(i=0;i<L.size;i++)
    {
      printf("%d ",L.array[i]);//遍历数组并且逐个输出元素
    }
}
int main()
{
   SeqList L;
   SeqListInit (L);
   SeqListDestory(L);//调用上述的两个函数
   return 0;
}
