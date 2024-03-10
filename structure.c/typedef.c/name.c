#include<stdio.h>
#include<string.h>
typedef struct students{
    char name[50];
    char branch[50];
    int ID_no;
}stu;

int main()
{
    stu st;
    strcpy(st.name,"kamlesh joshi");
    strcpy(st.branch,"compute scince engineering");
    st.ID_no=108;

    printf("name=%s\n",st.name);
    printf("branch=%s\n",st.branch);
    printf("ID_NO=%d",st.ID_no);
    return 0;
}
