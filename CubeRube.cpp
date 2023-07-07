#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class CubeRube
{
    private:
   char UpSide[3][3];
   char LeftSide[3][3];
   char RightSide[3][3];
   char BackSide[3][3];
   char FrontSide[3][3];
   char DownSide[3][3];
    int R_counter = 0;
    public:
    CubeRube()
    {
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                this->UpSide[i][j] = 'W';
                this->LeftSide[i][j] = 'O';
                this->RightSide[i][j] = 'R';
                this->BackSide[i][j] = 'B';
                this->FrontSide[i][j] = 'G';
                this->DownSide[i][j] = 'Y';
            }
        }
    }
    CubeRube(std::basic_ifstream in1)
    {
       
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                in1 >> UpSide[i][j];
            }
        }
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                in1 >> LeftSide[i][j];
            }
        }
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                in1>> FrontSide[i][j];
            }
        }
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                in1 >>RightSide[i][j];
            }
        }
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                in1 >> BackSide[i][j];
            }
        }
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                in1 >> DownSide[i][j];
            }
        }
    }
    ~CubeRube()
    {
    }
    void PrintUpCube()
    {
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
               cout << this->UpSide[i][j] << " ";
               
            }
            cout << "\n";
        }
    }
    void PrintDownCube()
    {
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
               cout << this->DownSide[i][j] << " ";
               
            }
            cout << "\n";
        }
    }
    void PrintLeftCube()
    {
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
               cout << this->LeftSide[i][j] << " ";
               
            }
            cout << "\n";
        }
    }
    void PrintRightCube()
    {
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
               cout << this->RightSide[i][j] << " ";
               
            }
            cout << "\n";
        }
    }
    void PrintFrontCube()
    {
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
               cout << this->FrontSide[i][j] << " ";
               
            }
            cout << "\n";
        }
    }
    void PrintBackCube()
    {
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
               cout << this->BackSide[i][j] << " ";
               
            }
            cout << "\n";
        }
    }
    void PrintCube()
    {
          for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
               cout << "  ";
               
            }
             for(int j = 0;j<3;j++)
            {
               cout << this->UpSide[i][j] << " ";
               
            }
            cout << "\n";
        }
         for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
               cout << this->LeftSide[i][j] << " ";
               
            }
             for(int j = 0;j<3;j++)
            {
               cout << this->FrontSide[i][j] << " ";
               
            }
            for(int j = 0;j<3;j++)
            {
               cout << this->RightSide[i][j] << " ";
               
            }
            for(int j = 0;j<3;j++)
            {
               cout << this->BackSide[i][j] << " ";
               
            }
            cout << "\n";
        }
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
               cout << "  ";
               
            }
             for(int j = 0;j<3;j++)
            {
               cout << this->DownSide[i][j] << " ";
               
            }
            cout << "\n";
        }

    }
    void Cr_R1()
    {
        char Buff_Arr[3];
        char Buff_Arr1[3];
        char Buff_Arr3X3[3][3];
        for(int i = 0;i<3;i++)
        {
            Buff_Arr[i]=UpSide[i][2];
            UpSide[i][2]=FrontSide[i][2];
        }
        for(int i = 0;i<3;i++)
        {
            Buff_Arr1[i]=DownSide[i][2];
        }
        DownSide[0][2]=BackSide[2][0];
        DownSide[1][2]=BackSide[1][0];
        DownSide[2][2]=BackSide[0][0];
        BackSide[0][0]=Buff_Arr[2];
        BackSide[1][0]=Buff_Arr[1];
        BackSide[2][0]=Buff_Arr[0];
        for(int i = 0;i<3;i++)
        {
            FrontSide[i][2]=Buff_Arr1[i];
        }
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                Buff_Arr3X3[i][j]=RightSide[i][j];

            }
        }
        RightSide[0][0]=Buff_Arr3X3[2][0];
        RightSide[0][1]=Buff_Arr3X3[1][0];
        RightSide[0][2]=Buff_Arr3X3[0][0];
        RightSide[1][0]=Buff_Arr3X3[2][1];
        RightSide[1][1]=Buff_Arr3X3[1][1];
        RightSide[1][2]=Buff_Arr3X3[0][1];
        RightSide[2][0]=Buff_Arr3X3[2][2];
        RightSide[2][1]=Buff_Arr3X3[1][2];
        RightSide[2][2]=Buff_Arr3X3[0][2];
        
    }
    void Cr_R()
    {
        Cr_R1();
        cout << "R ";
    }
    void Cr_R_Hatch()
    {
        for(int i = 0;i<3;i++)
        Cr_R1();
        cout <<"R' ";
    }
    void Cr_U_Hatch1()
    {
        char Buff_Arr[3];
        char Buff_Arr1[3];
         char Buff_Arr3X3[3][3];
         for(int i = 0;i<3;i++)
         {
             Buff_Arr[i]=RightSide[0][i];
             RightSide[0][i] = FrontSide[0][i];
         }
          for(int i = 0;i<3;i++)
          {
              FrontSide[0][i]=LeftSide[0][i];
              LeftSide[0][i]=BackSide[0][i];
              BackSide[0][i]=Buff_Arr[i];
          }
 for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                Buff_Arr3X3[i][j]=UpSide[i][j];

            }
        }
        UpSide[0][0]=Buff_Arr3X3[0][2];
        UpSide[0][1]=Buff_Arr3X3[1][2];
        UpSide[0][2]=Buff_Arr3X3[2][2];
        UpSide[1][0]=Buff_Arr3X3[0][1];
        UpSide[1][1]=Buff_Arr3X3[1][1];
        UpSide[1][2]=Buff_Arr3X3[2][1];
        UpSide[2][0]=Buff_Arr3X3[0][0];
        UpSide[2][1]=Buff_Arr3X3[1][0];
        UpSide[2][2]=Buff_Arr3X3[2][0];
        
    }
    void Cr_U()
    {
         for(int i = 0;i<3;i++)
         {
             Cr_U_Hatch1();
         }
         cout << "U ";
    }
    void Cr_U_Hatch()
    {
         Cr_U_Hatch1();
         cout << "U' ";
    }
    void Cr_L1()
    {
        char Buff_Arr[3];
        char Buff_Arr3X3[3][3];
        for(int i = 0;i<3;i++)
        {
            Buff_Arr[i]=FrontSide[i][0];
            FrontSide[i][0]=UpSide[i][0];
        }
        UpSide[0][0]=BackSide[2][2];
        UpSide[1][0]=BackSide[1][2];
        UpSide[2][0]=BackSide[0][2];
        BackSide[0][2]=DownSide[2][0];
        BackSide[1][2]=DownSide[1][0];
        BackSide[2][2]=DownSide[0][0];
        for(int i = 0;i<3;i++)
        {
            DownSide[i][0]=Buff_Arr[i];
        }
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                Buff_Arr3X3[i][j]=LeftSide[i][j];

            }
        }
         LeftSide[0][0]=Buff_Arr3X3[2][0];
        LeftSide[0][1]=Buff_Arr3X3[1][0];
        LeftSide[0][2]=Buff_Arr3X3[0][0];
        LeftSide[1][0]=Buff_Arr3X3[2][1];
        LeftSide[1][1]=Buff_Arr3X3[1][1];
        LeftSide[1][2]=Buff_Arr3X3[0][1];
        LeftSide[2][0]=Buff_Arr3X3[2][2];
        LeftSide[2][1]=Buff_Arr3X3[1][2];
        LeftSide[2][2]=Buff_Arr3X3[0][2];
        
    }
    void Cr_L_Hatch()
    {
        for(int i = 0;i<3;i++)
         {
             Cr_L1();
         }
         cout << "L' ";
    }
    void Cr_L()
    {
         Cr_L1();
         cout << "L ";
    }
    void Cr_D1()
    {
        char Buff_Arr[3];
        char Buff_Arr3X3[3][3];
        for(int i = 0;i<3;i++)
        {
            Buff_Arr[i]=RightSide[2][i];
            RightSide[2][i]=FrontSide[2][i];
            
        }
         for(int i = 0;i<3;i++)
         {
             FrontSide[2][i]=LeftSide[2][i];

         }
         for(int i = 0;i<3;i++)
         {
             LeftSide[2][i]=BackSide[2][i];
             BackSide[2][i]=Buff_Arr[i];
         }
         for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                Buff_Arr3X3[i][j]=DownSide[i][j];

            }
        }
    DownSide[0][0]=Buff_Arr3X3[2][0];
        DownSide[0][1]=Buff_Arr3X3[1][0];
        DownSide[0][2]=Buff_Arr3X3[0][0];
        DownSide[1][0]=Buff_Arr3X3[2][1];
        DownSide[1][1]=Buff_Arr3X3[1][1];
        DownSide[1][2]=Buff_Arr3X3[0][1];
       DownSide[2][0]=Buff_Arr3X3[2][2];
        DownSide[2][1]=Buff_Arr3X3[1][2];
        DownSide[2][2]=Buff_Arr3X3[0][2];
        
    }
    void Cr_D_Hatch()
    {
        for(int i = 0;i<3;i++)
         {
             Cr_D1();
         }
         cout << "D' ";
    }
    void Cr_D()
    {
        Cr_D1();
        cout << "D ";
    }
    void Cr_F1()
    {
         char Buff_Arr[3];
        char Buff_Arr3X3[3][3];
        for(int i = 0;i<3;i++)
        {
            Buff_Arr[i]=RightSide[i][0];
            RightSide[i][0] = UpSide[2][i];
        }
        UpSide[2][0]=LeftSide[2][2];
        UpSide[2][1]=LeftSide[1][2];
        UpSide[2][2]=LeftSide[0][2];
        for(int i = 0;i<3;i++)
        {
            LeftSide[i][2]=DownSide[0][i];
        }
        DownSide[0][0]=Buff_Arr[2];
        DownSide[0][1]=Buff_Arr[1];
        DownSide[0][2]=Buff_Arr[0];
         for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                Buff_Arr3X3[i][j]=FrontSide[i][j];

            }
        }
        FrontSide[0][0]=Buff_Arr3X3[2][0];
        FrontSide[0][1]=Buff_Arr3X3[1][0];
        FrontSide[0][2]=Buff_Arr3X3[0][0];
        FrontSide[1][0]=Buff_Arr3X3[2][1];
        FrontSide[1][1]=Buff_Arr3X3[1][1];
        FrontSide[1][2]=Buff_Arr3X3[0][1];
        FrontSide[2][0]=Buff_Arr3X3[2][2];
        FrontSide[2][1]=Buff_Arr3X3[1][2];
        FrontSide[2][2]=Buff_Arr3X3[0][2];
       
    }
    void Cr_F_Hatch()
    {
        for(int i = 0;i<3;i++)
        {
            Cr_F1();
        }
        cout<<"F' ";
    }
    void Cr_F()
    {
        Cr_F1();
         cout << "F ";
    }
    void Cr_B1()
    {
        char Buff_Arr[3];
        char Buff_Arr3X3[3][3];
        for(int i = 0;i<3;i++)
        {
            Buff_Arr[i]=DownSide[2][i];
            DownSide[2][i]=LeftSide[i][0];
        }
        LeftSide[0][0]=UpSide[0][2];
        LeftSide[1][0]=UpSide[0][1];
        LeftSide[2][0]=UpSide[0][0];
        UpSide[0][2]=RightSide[2][2];
        UpSide[0][1]=RightSide[1][2];
        UpSide[0][0]=RightSide[0][2];
        
         RightSide[0][2]=Buff_Arr[2];
         RightSide[1][2]=Buff_Arr[1];
         RightSide[2][2]=Buff_Arr[0];
          for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                Buff_Arr3X3[i][j]=BackSide[i][j];

            }
        }
        BackSide[0][0]=Buff_Arr3X3[2][0];
        BackSide[0][1]=Buff_Arr3X3[1][0];
        BackSide[0][2]=Buff_Arr3X3[0][0];
         BackSide[1][0]=Buff_Arr3X3[2][1];
         BackSide[1][1]=Buff_Arr3X3[1][1];
        BackSide[1][2]=Buff_Arr3X3[0][1];
         BackSide[2][0]=Buff_Arr3X3[2][2];
         BackSide[2][1]=Buff_Arr3X3[1][2];
         BackSide[2][2]=Buff_Arr3X3[0][2];
        
    }
    void Cr_B_Hatch()
    {
        for(int i = 0;i<3;i++)
        {
            Cr_B1();
        }
        cout << "B' ";
    }
    void Cr_B()
    {
        Cr_B1();
        cout << "B ";
    }
    void Cr_Y1()
    {
        char Buff_Arr3X3[3][3];
          for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                Buff_Arr3X3[i][j]=UpSide[i][j];

            }
        }
        UpSide[0][0]=Buff_Arr3X3[2][0];
        UpSide[0][1]=Buff_Arr3X3[1][0];
        UpSide[0][2]=Buff_Arr3X3[0][0];
        UpSide[1][0]=Buff_Arr3X3[2][1];
        UpSide[1][1]=Buff_Arr3X3[1][1];
        UpSide[1][2]=Buff_Arr3X3[0][1];
        UpSide[2][0]=Buff_Arr3X3[2][2];
        UpSide[2][1]=Buff_Arr3X3[1][2];
        UpSide[2][2]=Buff_Arr3X3[0][2];
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                Buff_Arr3X3[i][j]=DownSide[i][j];

            }
        }
        DownSide[0][0]=Buff_Arr3X3[0][2];
        DownSide[0][1]=Buff_Arr3X3[1][2];
       DownSide[0][2]=Buff_Arr3X3[2][2];
        DownSide[1][0]=Buff_Arr3X3[0][1];
        DownSide[1][1]=Buff_Arr3X3[1][1];
        DownSide[1][2]=Buff_Arr3X3[2][1];
        DownSide[2][0]=Buff_Arr3X3[0][0];
        DownSide[2][1]=Buff_Arr3X3[1][0];
        DownSide[2][2]=Buff_Arr3X3[2][0];
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                Buff_Arr3X3[i][j]=LeftSide[i][j];
                LeftSide[i][j] = FrontSide[i][j];
                FrontSide[i][j] = RightSide[i][j];
                RightSide[i][j] = BackSide[i][j];
                BackSide[i][j]=Buff_Arr3X3[i][j];
                
            }
        }
       
       
    }
    void Cr_Y_Hatch()
    {
        for(int i = 0;i<3;i++)
        {
            Cr_Y1();
        }
        cout << "y' ";
    }
    void Cr_Y()
    {
        Cr_Y1();
        cout << "y ";
    }
    void Lyambda()
    {
        Cr_R();Cr_U();Cr_R_Hatch();Cr_F_Hatch();  Cr_R();Cr_U();Cr_R_Hatch();Cr_U_Hatch();  Cr_R_Hatch();Cr_F();Cr_R();Cr_R();Cr_U_Hatch(); Cr_R_Hatch();Cr_U_Hatch();  
    }
    void rev_Lyambda()
    {
        Cr_R_Hatch();Cr_U();Cr_U();Cr_R();Cr_U();Cr_R_Hatch();Cr_U();Cr_U();Cr_L();Cr_U_Hatch();Cr_R();Cr_U();Cr_L_Hatch();
    }
    void T_()
    {
        Cr_R(); Cr_U(); Cr_R_Hatch(); Cr_U_Hatch(); Cr_R_Hatch(); Cr_F(); Cr_R();Cr_R(); Cr_U_Hatch(); Cr_R_Hatch(); Cr_U_Hatch(); Cr_R(); Cr_U(); Cr_R_Hatch(); Cr_F_Hatch();
    }
    void Cr_Z1()
    {
        char Buff_Arr3X3[3][3];
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                Buff_Arr3X3[i][j]=RightSide[i][j];

            }
        }
        RightSide[0][0]=Buff_Arr3X3[2][0];
        RightSide[0][1]=Buff_Arr3X3[1][0];
        RightSide[0][2]=Buff_Arr3X3[0][0];
        RightSide[1][0]=Buff_Arr3X3[2][1];
        RightSide[1][1]=Buff_Arr3X3[1][1];
        RightSide[1][2]=Buff_Arr3X3[0][1];
        RightSide[2][0]=Buff_Arr3X3[2][2];
        RightSide[2][1]=Buff_Arr3X3[1][2];
        RightSide[2][2]=Buff_Arr3X3[0][2];
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                Buff_Arr3X3[i][j]=LeftSide[i][j];

            }
        }
       for(int g = 0;g<3;g++)
       {
           for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                Buff_Arr3X3[i][j]=LeftSide[i][j];

            }
        }
        LeftSide[0][0]=Buff_Arr3X3[2][0];
        LeftSide[0][1]=Buff_Arr3X3[1][0];
        LeftSide[0][2]=Buff_Arr3X3[0][0];
        LeftSide[1][0]=Buff_Arr3X3[2][1];
        LeftSide[1][1]=Buff_Arr3X3[1][1];
        LeftSide[1][2]=Buff_Arr3X3[0][1];
        LeftSide[2][0]=Buff_Arr3X3[2][2];
        LeftSide[2][1]=Buff_Arr3X3[1][2];
        LeftSide[2][2]=Buff_Arr3X3[0][2];
       }
        
        
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                Buff_Arr3X3[i][j]=UpSide[i][j];
                UpSide[i][j]=FrontSide[i][j];
                FrontSide[i][j]=DownSide[i][j];
            }
        }
         DownSide[0][0]=BackSide[2][2];
        DownSide[0][1]=BackSide[2][1];
       DownSide[0][2]=BackSide[2][0];
        DownSide[1][0]=BackSide[1][2];
        DownSide[1][1]=BackSide[1][1];
        DownSide[1][2]=BackSide[1][0];
        DownSide[2][0]=BackSide[0][2];
        DownSide[2][1]=BackSide[0][1];
        DownSide[2][2]=BackSide[0][0];

        BackSide[0][0]=Buff_Arr3X3[2][2];
        BackSide[0][1]=Buff_Arr3X3[2][1];
        BackSide[0][2]=Buff_Arr3X3[2][0];
         BackSide[1][0]=Buff_Arr3X3[1][2];
         BackSide[1][1]=Buff_Arr3X3[1][1];
        BackSide[1][2]=Buff_Arr3X3[1][0];
         BackSide[2][0]=Buff_Arr3X3[0][2];
         BackSide[2][1]=Buff_Arr3X3[0][1];
         BackSide[2][2]=Buff_Arr3X3[0][0];
        
    }
    void Cr_Z()
    {
        Cr_Z1();
        cout << "z ";
    }
    void Cr_Z_Hatch()
    {
        for(int i = 0;i<3;i++)
        Cr_Z1();
        cout << "z' ";
    }
    void RevLyambda_left()
    {
        Cr_L(); Cr_U(); Cr_U(); Cr_L_Hatch(); Cr_U_Hatch(); Cr_L(); Cr_U();Cr_U(); Cr_R_Hatch(); Cr_U(); Cr_L_Hatch(); Cr_U_Hatch(); Cr_R();
    }
    void Kopie()
    {
        Cr_F(); Cr_R(); Cr_U_Hatch(); Cr_R_Hatch(); Cr_U_Hatch(); Cr_R(); Cr_U(); Cr_R_Hatch(); Cr_F_Hatch(); Cr_R(); Cr_U(); Cr_R_Hatch(); Cr_U_Hatch(); Cr_R_Hatch(); Cr_F(); Cr_R(); Cr_F_Hatch();
    }
    void Pif_paf()
    {
        Cr_R();Cr_U();Cr_R_Hatch();Cr_U_Hatch();
    }
    void Pif_paf_left()
    {
        Cr_L_Hatch();Cr_U_Hatch();Cr_L();Cr_U();
    }
    void OneSideAlgo()
    {
        int counter = 0;
        bool checker = false;
        while(FrontSide[1][1]!='W' && counter<4 )
        {
            counter++;
            Cr_Y();
        }
        counter = 0;
        if(FrontSide[1][1]!='W')
        {
            if(BackSide[1][1]=='W')
            {
                Cr_Z_Hatch();
            }
            else{

            
        while(FrontSide[1][1]!='W' && counter<4 )
        {
            counter++;
            if(FrontSide[1][1]!='W')
            Cr_Z_Hatch();
        }
            }
        }
        Cr_Z();
        counter = 0;
        int checker1 = 0;
        for(int i = 0;i<3;i++)
        {
            for(int j = 0;j<3;j++)
            {
                if(UpSide[1][1]!=UpSide[i][j])
                checker1++;
            }
        }
        if(checker1==0)
        {
            checker = true; 
              
        }
        if(checker!=true)
        {
            while((UpSide[0][1]!='W' || UpSide[1][0]!='W' || UpSide[2][1]!='W' || UpSide[1][2]!='W') && counter!=350)
            {
                counter++;
                if(FrontSide[1][2]=='W')
                {
                    while(FrontSide[1][2]=='W' && counter!=250)
                    {
                        counter++;
                        if(UpSide[1][2]!='W')
                        {
                            Cr_R();
                            
                        }
                        else
                        {
                            Cr_U();
                        }
                    }
                }
                if(FrontSide[1][0]=='W')
                {
                     while(FrontSide[1][0]=='W' && counter!=250)
                     {
                         counter++;
                       if(UpSide[1][0]!='W')
                       {
                           Cr_L_Hatch();
                       }
                       else
                       {
                           Cr_U();
                       }
                     }
                }
                if(FrontSide[0][1]=='W')
                {
                    while(FrontSide[0][1]=='W' && counter!=250)
                    {
                        counter++;
                        if(UpSide[1][0]!='W' && UpSide[1][2]!='W')
                        {
                            Cr_F();Cr_R();
                        }
                        else if(UpSide[1][0]!='W' && UpSide[1][2]=='W')
                        {
                            Cr_F_Hatch();Cr_L();
                        }
                        else if(UpSide[1][0]=='W' && UpSide[1][2]=='W')
                        {
                            Cr_F();Cr_U();Cr_F_Hatch();
                        }
                        else if(UpSide[1][0]=='W' && UpSide[1][2]!='W')
                        {
                            Cr_F();Cr_R();
                        }
                    }
                }
                if(FrontSide[2][1]=='W')
                {
                     while(FrontSide[2][1]=='W' && counter!=250)
                    {
                        counter++;
                        if(UpSide[1][0]!='W' && UpSide[1][2]!='W')
                        {
                            Cr_F();Cr_L_Hatch();
                        }
                        else if(UpSide[1][0]!='W' && UpSide[1][2]=='W')
                        {
                            Cr_F();Cr_L_Hatch();
                        }
                        else if(UpSide[1][0]=='W' && UpSide[1][2]=='W')
                        {
                            Cr_U();
                        }
                        else if(UpSide[1][0]=='W' && UpSide[1][2]!='W')
                        {
                            Cr_F_Hatch();Cr_R();
                        }
                    }
                }
                if(DownSide[0][1]=='W')
                {
                    while(DownSide[0][1]=='W' && counter!=250)
                    {
                         counter++;
                        if(UpSide[1][0]!='W' && UpSide[1][2]!='W')
                        {
                            Cr_D();Cr_R();Cr_R();
                        }
                        else if(UpSide[1][0]!='W' && UpSide[1][2]=='W')
                        {
                           Cr_D_Hatch();Cr_L_Hatch();Cr_L_Hatch();
                        }
                        else if(UpSide[1][0]=='W' && UpSide[1][2]=='W')
                        {
                            Cr_U();
                        }
                        else if(UpSide[1][0]=='W' && UpSide[1][2]!='W')
                        {
                            Cr_D();Cr_R();Cr_R();
                        }
                    }
                }
                if(DownSide[1][0]=='W')
                {
                    while(DownSide[1][0]=='W' && counter!=250)
                    {
                         counter++;
                        if(UpSide[1][0]!='W' && UpSide[1][2]!='W')
                        {
                            Cr_L_Hatch();Cr_L_Hatch();
                        }
                        else if(UpSide[1][0]!='W' && UpSide[1][2]=='W')
                        {
                          Cr_L_Hatch();Cr_L_Hatch();
                        }
                        else if(UpSide[1][0]=='W' && UpSide[1][2]=='W')
                        {
                            Cr_U();
                        }
                        else if(UpSide[1][0]=='W' && UpSide[1][2]!='W')
                        {
                            Cr_D();Cr_D();Cr_R();Cr_R();
                        }
                    }
                }
                if(DownSide[1][2]=='W')
                {
                    while(DownSide[1][2]=='W' && counter!=250)
                    {
                        counter++;
                        if(UpSide[1][0]!='W' && UpSide[1][2]!='W')
                        {
                            Cr_R();Cr_R();
                        }
                        else if(UpSide[1][0]!='W' && UpSide[1][2]=='W')
                        {
                          Cr_D();Cr_D();Cr_L();Cr_L();
                        }
                        else if(UpSide[1][0]=='W' && UpSide[1][2]=='W')
                        {
                            Cr_U();
                        }
                        else if(UpSide[1][0]=='W' && UpSide[1][2]!='W')
                        {
                            Cr_R();Cr_R();
                        }
                    }
                }
                 if(DownSide[2][1]=='W')
                {
                    while(DownSide[2][1]=='W' && counter!=250)
                    {
                         counter++;
                       if(UpSide[0][1]!='W')
                       {
                           Cr_B();Cr_B();
                       }
                       else
                       {
                           Cr_U();
                       }
                    }
                }
                
                if(FrontSide[2][1]!='W' && FrontSide[1][0]!='W' && FrontSide[0][1]!='W' && FrontSide[1][2]!='W')
                Cr_Y();
            
            if(counter>=350)
            {
                throw exception();
            }
                
            
            

          
        }
        while((UpSide[0][0]!='W' || UpSide[0][2]!='W' || UpSide[2][0]!='W' || UpSide[2][2]!='W') && counter!=450)
        {
            counter++;
            //if(FrontSide[2][2]!='W' && FrontSide[2][0]!='W' && FrontSide[0][2]!='W' && FrontSide[0][0]!='W')
               // Cr_Y_Hatch();
            if(FrontSide[0][0]=='W')
            {
                while(FrontSide[0][0]=='W' && counter!=250)
                {
                    counter++;
                if(UpSide[0][0]!='W')
                {
                    Cr_F_Hatch();Cr_B();Cr_D_Hatch();Cr_F();Cr_B_Hatch();
                }
                else
                {
                    Cr_F_Hatch();Cr_D_Hatch();Cr_F();Cr_U();
                }
                }
               
            }
            if(FrontSide[0][2]=='W')
            {
                while(FrontSide[0][2]=='W' && counter!=250)
                {
                    counter++;
                if(UpSide[0][2]!='W')
                {
                    Cr_F();Cr_B_Hatch();Cr_D();Cr_B();Cr_F_Hatch();
                }
                else
                {
                    Cr_F();Cr_D();Cr_F_Hatch();Cr_U();
                }
                }
               
            }
            if(FrontSide[2][0]=='W')
            {
                while(FrontSide[2][0]=='W' && counter!=250)
                {
                    counter++;
                if(UpSide[2][0]!='W')
                {
                    Cr_F_Hatch();Cr_D_Hatch();Cr_F();
                }
                else
                {
                    Cr_U();
                }
                }
               
            }
            if(FrontSide[2][2]=='W')
            {
                while(FrontSide[2][2]=='W' && counter!=250)
                {
                    counter++;
                if(UpSide[2][2]!='W')
                {
                    Cr_F();Cr_D();Cr_F_Hatch();
                }
                else
                {
                    Cr_U();
                }
                }
               
            }
             if(DownSide[0][0]=='W')
            {
                while(DownSide[0][0]=='W' && counter!=250)
                {
                    counter++;
                if(UpSide[2][0]!='W')
                {
                    Cr_F_Hatch();Cr_D();Cr_F();Cr_D_Hatch();Cr_D_Hatch();Cr_F_Hatch();Cr_D_Hatch();Cr_F();
                }
                else
                {
                    Cr_F_Hatch();Cr_D_Hatch();Cr_F();Cr_U();
                }
                }
               
            }
            if(DownSide[0][2]=='W')
            {
                Cr_D_Hatch();
                while(DownSide[0][0]=='W' && counter!=250)
                {
                    counter++;
                if(UpSide[2][0]!='W')
                {
                    Cr_F_Hatch();Cr_D();Cr_F();Cr_D_Hatch();Cr_D_Hatch();Cr_F_Hatch();Cr_D_Hatch();Cr_F();
                }
                else
                {
                    Cr_F_Hatch();Cr_D_Hatch();Cr_F();Cr_U();
                }
                }
               
            }
            if(DownSide[2][0]=='W')
            {
                Cr_D_Hatch();
                while(DownSide[0][0]=='W' && counter!=250)
                {
                    counter++;
                if(UpSide[2][0]!='W')
                {
                    Cr_F_Hatch();Cr_D();Cr_F();Cr_D_Hatch();Cr_D_Hatch();Cr_F_Hatch();Cr_D_Hatch();Cr_F();
                }
                else
                {
                    Cr_F_Hatch();Cr_D_Hatch();Cr_F();Cr_U();
                }
                }
               
            }
            if(DownSide[2][2]=='W')
            {
                Cr_D_Hatch();Cr_D_Hatch();
                while(DownSide[0][0]=='W' && counter!=250)
                {
                    counter++;
                if(UpSide[2][0]!='W')
                {
                    Cr_F_Hatch();Cr_D();Cr_F();Cr_D_Hatch();Cr_D_Hatch();Cr_F_Hatch();Cr_D_Hatch();Cr_F();
                }
                else
                {
                    Cr_F_Hatch();Cr_D_Hatch();Cr_F();Cr_U();
                }
                }
               
            }
             if(FrontSide[0][2]!='W' &&  FrontSide[0][0]!='W' &&  FrontSide[2][0]!='W' && FrontSide[2][2]!='W' && DownSide[0][2]!='W' &&  DownSide[0][0]!='W' &&  DownSide[2][0]!='W' && DownSide[2][2]!='W')
            Cr_Y();
        }
        while(FrontSide[0][1]!='G' || RightSide[0][1]!='R' || LeftSide[0][1]!='O' || BackSide[0][1]!='B' && counter!=550)
        {
        
        counter++;
        Cr_Y();
        if(FrontSide[0][1]=='G' && RightSide[0][1]=='B')
        {
            
            if(LeftSide[0][1]=='R')
            {
                T_();
            }
            else if(LeftSide[0][1]=='O')
            {
                Lyambda();
            }
        }
        
        else if(FrontSide[0][1]=='G' && RightSide[0][1]=='O')
        {
            Lyambda();
            
        }
        if(FrontSide[0][1]=='G' && BackSide[0][1]=='R')
        {
            Cr_Y();Lyambda();
        }
        else if(FrontSide[0][1]=='G' && BackSide[0][1]=='O')
        {
            Cr_Y();Cr_Y();Lyambda();
        }
        if(FrontSide[0][1]=='G' && LeftSide[0][1]=='R')
        {
            T_();
        }
        else if(FrontSide[0][1]=='G' && LeftSide[0][1]=='B')
        {
            Cr_Y();Cr_Y();Lyambda();
        }
        
        }
        cout<<"\n";
        PrintCube();
        cout<<"\n";
         if(FrontSide[0][0]=='B' && FrontSide[0][1]=='G' && FrontSide[0][2]=='O' && RightSide[0][0]=='G' && RightSide[0][1]=='R' && RightSide[0][2]=='G' && BackSide[0][0]=='R' && BackSide[0][1]=='B' &&  BackSide[0][2]=='B' && LeftSide[0][0]=='O' && LeftSide[0][1]=='O' &&  LeftSide[0][2]=='R')
         {
             
Cr_U();
Cr_Y();
Cr_Y();
Lyambda();
Cr_Y();
Cr_Y();
Kopie();
Cr_Y();
Lyambda();
Cr_Y();
Cr_Y();
Kopie();
Lyambda();
Cr_Y();
Cr_Y();
Kopie();
Cr_Y();
Lyambda();
Cr_Y();
Cr_Y();
Kopie();
Cr_Y();
Lyambda();
Cr_Y();
Cr_Y();
Kopie();
Cr_Y();
         }
         if(FrontSide[0][0]=='G' && FrontSide[0][1]=='R' && FrontSide[0][2]=='G' && RightSide[0][0]=='R' && RightSide[0][1]=='B' && RightSide[0][2]=='B' && BackSide[0][0]=='O' && BackSide[0][1]=='O' &&  BackSide[0][2]=='R' && LeftSide[0][0]=='B' && LeftSide[0][1]=='G' &&  LeftSide[0][2]=='O')
         {
             Cr_Y();
Cr_Y();
Lyambda();
Cr_Y();
Cr_Y();
Kopie();
Cr_Y();
Lyambda();
Cr_Y();
Cr_Y();
Kopie();
Lyambda();
Cr_Y();
Cr_Y();
Kopie();
Cr_Y();
Lyambda();
Cr_Y();
Cr_Y();
Kopie();
Cr_Y();
Lyambda();
Cr_Y();
Cr_Y();
Kopie();
Cr_Y();
         }
         if(FrontSide[0][0]=='G' && FrontSide[0][1]=='R' && FrontSide[0][2]=='G' && RightSide[0][0]=='R' && RightSide[0][1]=='B' && RightSide[0][2]=='B' && BackSide[0][0]=='O' && BackSide[0][1]=='O' &&  BackSide[0][2]=='R' && LeftSide[0][0]=='B' && LeftSide[0][1]=='G' &&  LeftSide[0][2]=='O')
         {
             Cr_Y();
Cr_Y();
Lyambda();
Cr_Y();
Cr_Y();
Kopie();
Cr_Y();
Lyambda();
Cr_Y();
Cr_Y();
Kopie();
Lyambda();
Cr_Y();
Cr_Y();
Kopie();
Cr_Y();
Lyambda();
Cr_Y();
Cr_Y();
Kopie();
Cr_Y();
Lyambda();
Cr_Y();
Cr_Y();
Kopie();
Cr_Y();
         }
        
    Cr_Z();
    Cr_Z();
        while((FrontSide[1][0]!=FrontSide[1][1])||(FrontSide[1][0]!=FrontSide[1][2])||(RightSide[1][0]!=RightSide[1][1])||(RightSide[1][0]!=RightSide[1][2])||(LeftSide[1][0]!=LeftSide[1][1])||(LeftSide[1][0]!=LeftSide[1][2]) || (BackSide[1][0]!=BackSide[1][1])||(BackSide[1][0]!=BackSide[1][2]) && counter<10)
        {
            counter++;
            if(FrontSide[1][1]=='G')
            {
                int coount = 0;
                while(((UpSide[2][1]!='R' && UpSide[2][1]!='O')) && counter<4)
                {
                    Cr_U();
                    coount++;
                }
                coount = 0;
                if(UpSide[2][1]=='R' && FrontSide[0][1]=='G')
                {
                    Cr_U_Hatch();Pif_paf_left();Cr_Y_Hatch();Pif_paf();
                }
                else if(UpSide[2][1]=='O' && FrontSide[0][1]=='G')
                {
                    Cr_U();Pif_paf();Cr_Y();Pif_paf_left();
                }
                else{
                    if(RightSide[1][0]=='G')
                    {
                        Pif_paf();Cr_Y();Pif_paf_left();
                    }
                    if(LeftSide[1][2]=='G')
                    {
                        Cr_Y_Hatch();Pif_paf();Cr_Y();Pif_paf_left();
                    }
                    Cr_U();
                }
            }
            if(FrontSide[1][1]=='R')
            {
                int coount = 0;
                while(((UpSide[2][1]!='B' && UpSide[2][1]!='G')) && counter<4)
                {
                    Cr_U();
                    coount++;
                }
                coount = 0;
                if(UpSide[2][1]=='B' && FrontSide[0][1]=='R')
                {
                    Cr_U_Hatch();Pif_paf_left();Cr_Y_Hatch();Pif_paf();
                }
                else if(UpSide[2][1]=='G' && FrontSide[0][1]=='R')
                {
                    Cr_U();Pif_paf();Cr_Y();Pif_paf_left();
                }
                else{
                    if(RightSide[1][0]=='R')
                    {
                        Pif_paf();Cr_Y();Pif_paf_left();
                    }
                    if(LeftSide[1][2]=='R')
                    {
                        Cr_Y_Hatch();Pif_paf();Cr_Y();Pif_paf_left();
                    }
                    Cr_U();
                }
            }
            if(FrontSide[1][1]=='B')
            {
                int coount = 0;
                while(((UpSide[2][1]!='O' && UpSide[2][1]!='R')) && counter<4)
                {
                    Cr_U();
                    coount++;
                }
                coount = 0;
                if(UpSide[2][1]=='R' && FrontSide[0][1]=='B')
                {
                    Cr_U_Hatch();Pif_paf_left();Cr_Y_Hatch();Pif_paf();
                }
                else if(UpSide[2][1]=='O' && FrontSide[0][1]=='B')
                {
                    Cr_U();Pif_paf();Cr_Y();Pif_paf_left();
                }
                else{
                    if(RightSide[1][0]=='B')
                    {
                        Pif_paf();Cr_Y();Pif_paf_left();
                    }
                    if(LeftSide[1][2]=='B')
                    {
                        Cr_Y_Hatch();Pif_paf();Cr_Y();Pif_paf_left();
                    }
                    Cr_U();
                }
            }
            if(FrontSide[1][1]=='O')
            {
                int coount = 0;
                while(((UpSide[2][1]!='G' && UpSide[2][1]!='B')) && counter<4)
                {
                    Cr_U();
                    coount++;
                }
                coount = 0;
                if(UpSide[2][1]=='G' && FrontSide[0][1]=='O')
                {
                    Cr_U_Hatch();Pif_paf_left();Cr_Y_Hatch();Pif_paf();
                }
                else if(UpSide[2][1]=='B' && FrontSide[0][1]=='O')
                {
                    Cr_U();Pif_paf();Cr_Y();Pif_paf_left();
                }
                else{
                    if(RightSide[1][0]=='O')
                    {
                        Pif_paf();Cr_Y();Pif_paf_left();
                    }
                    if(LeftSide[1][2]=='O')
                    {
                        Cr_Y_Hatch();Pif_paf();Cr_Y();Pif_paf_left();
                    } 
                    Cr_U();
                }
            }
           
        }

        
        
        
        
    }
    }

};
int main()
{
CubeRube p;
p.PrintCube();
cout << "\n";

p.Cr_U_Hatch();
cout << "\n";
p.PrintCube();
p.Cr_Z_Hatch();
p.Cr_R();
p.Cr_B();
p.Cr_R();
p.Cr_B();
p.Cr_L();
p.Cr_F();
p.Cr_U();
p.Cr_F();
p.Cr_U();
p.Cr_B();
p.Cr_R();
p.Cr_B();
p.Cr_L();
p.Cr_F();
p.Cr_Z();
p.Cr_Y();
p.Cr_Y();
p.Cr_U();
p.Cr_B();
p.Cr_R();
p.Cr_B();
p.Cr_R_Hatch();
p.Cr_L();
p.Cr_R_Hatch();

p.Lyambda();
p.OneSideAlgo();
cout << "\n";
p.PrintCube();
cout << "\n";



}