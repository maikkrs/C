#define MaxUs 20
#define MaxLen 15
#define labtime 10


typedef struct //All the information of the student
{
    char name[MaxLen];
    char name2[MaxLen];
    char ln[MaxLen];
    char ln2[MaxLen];
    char topic[MaxLen];
    char day[MaxLen];
    int price[MaxLen];
    int hrs[labtime];
} User;


int registerUser();
void writeToFile();
int printlist();
int main();

