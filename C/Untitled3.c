 #include<stdio.h>
 int main()
 {
    char empname[40];
    FILE *fp;
    int long recsize;
    char ename[30];
    fp=fopen("d:\\project\\plist.txt", "rb+");
        printf("Enter the employee name to modify: ");
        scanf("%s", empname);
        rewind(fp);
        while(fread(&ename,recsize,1,fp)==1)  /// fetch all record from file
        {
            if(strcmp(ename,empname) == 0)  ///if entered name matches with that in file
            {
                printf("\nEnter new name,age and bs: ");
                scanf("%s",ename);
                fseek(fp,-recsize,SEEK_CUR); /// move the cursor 1 step back from current position
                fwrite(&ename,recsize,1,fp); /// override the record
                break;
            }
        }
 }
