// 空格作为分隔输入,读取一行的整数
fgets(buf, BUFSIZE, stdin);
int v;
char *p = strtok(buf, " ");
while (p)
{
    sscanf(p, "%d", &v);
    p = strtok(NULL," ");
}
