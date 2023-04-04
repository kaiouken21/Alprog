#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
   int a, b, c, diskrimnan, x1, x2; 

   cout << "masukan nilai a: ";
   cin >> a;
   cout << "masukan nilai b: ";
   cin >> b;
   cout << "masukan nilai c: ";
   cin >> c;

   diskrimnan = b*b - 4*a*c;

   if (diskrimnan < 0)
   {
      diskrimnan = -diskrimnan;
      cout << "akar imajiner" << endl;
   }
   else
   {
      cout << "akar sebenarnya" << endl;
   }

   if (a != 0)
   {
      x1 = (-b + sqrt(diskrimnan)) / (2*a); 
      x2 = (-b - sqrt(diskrimnan)) / (2*a);
   }
   else
   {
      x1 = 0;
      x2 = 0;
      cout << "bukan akar persamaan kuadrat" << endl;
   }

   cout << "nilai diskriminantnya adalah= " << diskrimnan << endl; 
   cout << "nilai dari x1= " << x1 << endl; 
   cout << "nilai dari x2= " << x2 << endl; 

   return 0;
}
