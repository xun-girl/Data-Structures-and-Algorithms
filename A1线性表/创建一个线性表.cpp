#include<stdio.h>
#define N 10
typedef int SLDataType;//��������typedef�����Խ���������������ΪSDataType
typedef struct//����˳���
{
    SLDataType array[N];//ʵ���Ͼ���һ������
    int size;//����ĳ���
}SeqList;//�����SeqList�����Ͳ��Ǳ���
void SeqListInit(SeqList &L)//����˳����ֵ,&l������һ��������������൱�ڸ����L����һ���º�
{
    int i,n;//n���������Ա�ĳ���
    printf("���������Ա�ĳ���:");
    scanf("%d",&n);
    L.size=n;//��n��ֵ��L.size
    printf("��������:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&L.array[i]);//ԭ��ܼ�����͸�����Ԫ�������ֵ����ѭ��
    }
}
void SeqListDestory(SeqList L)//��ӡ˳����ֵ������������һ���ṹ�����
{
    int i=0;
    printf("�������:");
    for(i=0;i<L.size;i++)
    {
      printf("%d ",L.array[i]);//�������鲢��������Ԫ��
    }
}
int main()
{
   SeqList L;
   SeqListInit (L);
   SeqListDestory(L);//������������������
   return 0;
}
