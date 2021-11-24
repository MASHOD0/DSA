#include<stdio.h>

void towerOfHanoi(int n, char from_rod,
                    char to_rod, char aux_rod)
{
    if (n == 1)
    {
        // cout << "Move disk 1 from rod " << from_rod <<
        //                     " to rod " << to_rod<<endl;
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);

        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    // cout << "Move disk " << n << " from rod " << from_rod <<
    //                             " to rod " << to_rod << endl;
    printf("Move the disk %d from rod %c to rod %c\n", n, from_rod, to_rod);

    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
 
// Driver code
int main()
{
    int n = 4; // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}