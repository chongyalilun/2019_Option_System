Swait(S1,t1,d1,…,Sn,tn,dn)
{
    while(true)
    {
        if(Si>=ti&&…&&Sn>=tn)
        {
            for(i=1;i<=n;i++)
                Si=Si-di;
            break;
        }
        else
        {
            调用进程，将进程放置在第一个Si<ti的等待队列，将该处理作为Swait操作的开始
        }
    }
}



Ssignal(S1,d1,…,Sn,dn)
while(true)
{
    for(i=1;i<=n;i++)
    {
        Si=Si+di;
        取出等待队列中所有与Si相关的进程，放入就绪队列
    }
}
