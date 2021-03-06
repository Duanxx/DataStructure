/*****************************************************************************
*                                                                            *
*  @file     SLL.h                                                           *
*  @brief    单链表头文件                                                      *
*               1.初始化单链表                                                 *
*               2.在单链表头添加节点                                            *
*  @author   Duanxx                                                          *
*  @email    duanxxnj@163.com                                                *
*  @date     2017-08-11                                                      *
*                                                                            *
*****************************************************************************/

#ifndef _SLL_H_
#define _SLL_H_

/* 1.初始化线性表，即置单链表的表头指针为空 */
/* 2.创建线性表，此函数输入负数终止读取数据*/
/* 3.打印链表，链表的遍历*/
/* 4.清除线性表L中的所有元素，即释放单链表L中所有的结点，使之成为一个空表 */
/* 5.返回单链表的长度 */
/* 6.检查单链表是否为空，若为空则返回１，否则返回０ */
/* 7.返回单链表中第pos个结点中的元素，若pos超出范围，则停止程序运行 */
/* 8.从单链表中查找具有给定值x的第一个元素，若查找成功则返回该结点data域的存储地址，否则返回NULL */
/* 9.把单链表中第pos个结点的值修改为x的值，若修改成功返回１，否则返回０ */
/* 10.向单链表的表头插入一个元素 */
/* 11.向单链表的末尾添加一个元素 */
/* 12.向单链表中第pos个结点位置插入元素为x的结点，若插入成功返回１，否则返回０ */
/* 13.向有序单链表中插入元素x结点，使得插入后仍然有序 */
/* 14.从单链表中删除表头结点，并把该结点的值返回，若删除失败则停止程序运行 */
/* 15.从单链表中删除表尾结点并返回它的值，若删除失败则停止程序运行 */
/* 16.从单链表中删除第pos个结点并返回它的值，若删除失败则停止程序运行 */
/* 17.从单链表中删除值为x的第一个结点，若删除成功则返回1,否则返回0 */
/* 18.交换2个元素的位置 */
/* 19.将线性表进行快速排序 */

#include "Common/duanxxType.h"
#include "Common/duanxxTest.h"

/**
*   单链表节点，这里仅仅是放了一个数据
*/
typedef struct _SLL_NODE
{
    struct _SLL_NODE *pNext;
    ULONG ulData;
}SLL_NODE_S, *pSLL_NODE_S;

typedef struct _SLL
{
    pSLL_NODE_S  pHead;
    pSLL_NODE_S  pTail;
    ULONG        ulNum;
}SLL_S, *pSLL_S;

RET_E SLL_init(pSLL_S pSLL);
RET_E SLL_addNodeToHead(pSLL_S pSll, pSLL_NODE_S pNode);
RET_E SLL_addNodeToTail(pSLL_S pSll, pSLL_NODE_S pNode);
RET_E SLL_deleteFromHead(pSLL_S pSll);
RET_E SLL_deleteFromTail(pSLL_S pSll);
RET_E SLL_freeList(pSLL_S pSll);
RET_E SLL_displayList(pSLL_S pSll);
RET_E SLL_isInList(pSLL_S pSll, ULONG ulData);
INT32 SLL_count(pSLL_S pSll);


#endif //end of #ifndef _SLL_H_