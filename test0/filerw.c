#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

int filerw()
{
    int fd,fd_read,fd_write;
    char C; 
    char path[100];
    char buf_r[1024]={"\0"};
    char buf_w[1024]={"\0"};
    printf("输入操作的文件路径：\n");
    scanf("%s",path);
    fd=open(path,O_CREAT|O_RDWR|O_APPEND,0777);  
    if(fd==-1){
        printf("无法打开文件\n");
        }
    printf("选择操作(r:读,w:写):\n");
    while((C=getchar()) != EOF)
    {
        switch (C)
        {
            case 'r':
                {
                    fd_read=read(fd,buf_r,50);
                    if(fd_read==-1){
                    printf("无法读取文件\n");
                    }
                    printf("%s",buf_r);
                }
            break;
            case 'w':
                {
                    printf("输入要添加的内容：\n");
                    scanf("%s",buf_w);
                    fd_write=write(fd,buf_w,strlen(buf_w));
                    if(fd_write==-1){
                    printf("无法编辑文件\n");
                }
            break;
        }
    
        default:
        break;
        }
        }
    return 0;
}
