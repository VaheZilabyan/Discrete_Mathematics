#include <iostream>
using namespace std;
int main()
{
	int i,n,j,f[16];
	do{
		cout<<"Nermucel vektori qanaky(4 kam 8 kam 16): ";
		cin>>n;
	}while (n!=4 && n!=8 && n!=16);
	
	switch (n)
	{
		case 16:
		{
			cout<<"Nermucel vektor: ";
         	for (i=0;i<n;i++)
            	cin>>f[i];	
            cout<<endl;	
	        cout<<"X Y Z M F"<<endl;
	        cout<<"0 0 0 0 "<<f[0]<<endl;
         	cout<<"0 0 0 1 "<<f[1]<<endl;
        	cout<<"0 0 1 0 "<<f[2]<<endl;
	        cout<<"0 0 1 1 "<<f[3]<<endl;
	        cout<<"0 1 0 0 "<<f[4]<<endl;
	        cout<<"0 1 0 1 "<<f[5]<<endl;
        	cout<<"0 1 1 0 "<<f[6]<<endl;
        	cout<<"0 1 1 1 "<<f[7]<<endl;
        	cout<<"1 0 0 0 "<<f[8]<<endl;
         	cout<<"1 0 0 1 "<<f[9]<<endl;
        	cout<<"1 0 1 0 "<<f[10]<<endl;
	        cout<<"1 0 1 1 "<<f[11]<<endl;
	        cout<<"1 1 0 0 "<<f[12]<<endl;
	        cout<<"1 1 0 1 "<<f[13]<<endl;
        	cout<<"1 1 1 0 "<<f[14]<<endl;
        	cout<<"1 1 1 1 "<<f[15]<<endl;
        	
        	int k1=0,k2=0,k3=0,k4=0;
        	for(i=0;i<n;i++)
        	{	
	            if (f[0]==f[8] && f[1]==f[9] && f[2]==f[10] && f[3]==f[11] && f[4]==f[12] && f[5]==f[13] && f[6]==f[14] && f[7]==f[15])
            	k1=1;
            	if (f[0]==f[4] && f[1]==f[5] && f[2]==f[6] && f[3]==f[7] && f[8]==f[12] && f[9]==f[13] && f[10]==f[14] && f[11]==f[15])
	            k2=2;
              	if (f[0]==f[2] && f[1]==f[3] && f[4]==f[6] && f[5]==f[7] && f[8]==f[10] && f[9]==f[11] && f[12]==f[14] && f[13]==f[15])
             	k3=3;
             	if (f[0]==f[1] && f[2]==f[3] && f[4]==f[5] && f[6]==f[7] && f[8]==f[9] && f[10]==f[11] && f[12]==f[13] && f[14]==f[15])
             	k4=4;
            }
            
            if (k1==0 && k2==0 && k3==0 && k4==0)
            {
            	cout<<endl;
                cout<<"Fiktiv popoxakanner chkan"<<endl;
                cout<<endl;
            	cout<<"Dizyunktiv dzev"<<endl;
			    if (f[0]==1) cout<<"X'Y'Z'M' v ";
               	if (f[1]==1) cout<<"X'Y'Z'M v ";
               	if (f[2]==1) cout<<"X'Y'Z M' v ";
               	if (f[3]==1) cout<<"X'Y'Z M v ";
               	if (f[4]==1) cout<<"X'Y Z'M' v ";
               	if (f[5]==1) cout<<"X'Y Z'M v ";
              	if (f[6]==1) cout<<"X'Y Z M' v ";
               	if (f[7]==1) cout<<"X'Y Z M";
               	if (f[8]==1) cout<<"X Y'Z'M' v "<<endl;
               	if (f[9]==1) cout<<"X Y'Z'M v ";
               	if (f[10]==1) cout<<"X Y'Z M' v ";
               	if (f[11]==1) cout<<"X Y'Z M v ";
               	if (f[12]==1) cout<<"X Y Z'M' v ";
               	if (f[13]==1) cout<<"X Y Z'M v ";
              	if (f[14]==1) cout<<"X Y Z M' v ";
               	if (f[15]==1) cout<<"X Y Z M";
            	cout<<endl;
            	cout<<endl;
            	cout<<"Konyuktiv dzev"<<endl;
			    if (f[0]==0) cout<<"(X v Y v Z v M)";
               	if (f[1]==0) cout<<"(X v Y v Z v M')";
              	if (f[2]==0) cout<<"(X v Y v Z' v M)";
               	if (f[3]==0) cout<<"(X v Y v Z' v M')";
               	if (f[4]==0) cout<<"(X v Y' v Z v M)";
               	if (f[5]==0) cout<<"(X v Y' v Z v M')";
               	if (f[6]==0) cout<<"(X v Y' v Z' v M)";
               	if (f[7]==0) cout<<"(X v Y' v Z' v M')";
               	if (f[8]==0) cout<<"(X' v Y v Z v M)"<<endl;
               	if (f[9]==0) cout<<"(X' v Y v Z v M')";
              	if (f[10]==0) cout<<"(X' v Y v Z' v M)";
               	if (f[11]==0) cout<<"(X' v Y v Z' v M')";
               	if (f[12]==0) cout<<"(X' v Y' v Z v M)";
               	if (f[13]==0) cout<<"(X' v Y' v Z v M')";
               	if (f[14]==0) cout<<"(X' v Y' v Z' v M)";
               	if (f[15]==0) cout<<"(X' v Y' v Z' v M')";
            }
            
            else if (k1==1 && k2==2 && k3==3 && k4==4)
            {
            	cout<<endl;
            	cout<<"Bolor popoxakannern fiktiv en"<<endl;
			}
			
			else if (k1==1 && k2==2 && k3==3)
            {
            	cout<<endl;
            	cout<<"X,Y,Z popoxakannern fiktiv en"<<endl;
            	cout<<"M F"<<endl;
             	cout<<"0 "<<f[0]<<endl;
    	        cout<<"1 "<<f[1]<<endl;
    	        cout<<endl;
             	cout<<"Dizyunktiv dzev"<<endl;
            	if (f[0]==1) cout<<"M'";
            	if (f[1]==1) cout<<"M";
            	cout<<endl;
            	cout<<endl;
            	cout<<"Konyuktiv dzev"<<endl;
            	if (f[0]==0) cout<<"M";
            	if (f[1]==0) cout<<"M'";
			}
			
			else if (k1==1 && k2==2)
            {
            	cout<<endl;
            	cout<<"X,Y popoxakannern fiktiv en"<<endl;
            	cout<<"Z M F"<<endl;
             	cout<<"0 0 "<<f[0]<<endl;
    	        cout<<"0 1 "<<f[1]<<endl;
    	        cout<<"1 0 "<<f[2]<<endl;
    	        cout<<"1 1 "<<f[3]<<endl;
    	        cout<<endl;
             	cout<<"Dizyunktiv dzev"<<endl;
            	if (f[0]==1) cout<<"Z'M' v ";
               	if (f[1]==1) cout<<"Z'M v ";
               	if (f[2]==1) cout<<"ZM' v ";
               	if (f[3]==1) cout<<"ZM v ";
            	cout<<endl;
            	cout<<endl;
            	cout<<"Konyuktiv dzev"<<endl;
            	if (f[0]==0) cout<<"(Z v M)";
            	if (f[1]==0) cout<<"(Z v M')";
            	if (f[2]==1) cout<<"(Z' v M)";
            	if (f[3]==1) cout<<"(Z' v M')";
			}
			
		   	else if (k1==1)
            {
            	cout<<endl;
        	    cout<<"X popoxakany fiktiv e:"<<endl;
        	    cout<<endl;
            	cout<<"Dizyunktiv dzev"<<endl;
			    if (f[0]==1) cout<<"X'Y'Z'M' v ";
               	if (f[1]==1) cout<<"X'Y'Z'M v ";
               	if (f[2]==1) cout<<"X'Y'Z M' v ";
               	if (f[3]==1) cout<<"X'Y'Z M v ";
               	if (f[4]==1) cout<<"X'Y Z'M' v ";
               	if (f[5]==1) cout<<"X'Y Z'M v ";
              	if (f[6]==1) cout<<"X'Y Z M' v ";
               	if (f[7]==1) cout<<"X'Y Z M";
            	cout<<endl;
            	cout<<endl;
            	cout<<"Konyuktiv dzev"<<endl;
			    if (f[0]==0) cout<<"(X v Y v Z v M)";
               	if (f[1]==0) cout<<"(X v Y v Z v M')";
              	if (f[2]==0) cout<<"(X v Y v Z' v M)";
               	if (f[3]==0) cout<<"(X v Y v Z' v M')";
               	if (f[4]==0) cout<<"(X v Y' v Z v M)";
               	if (f[5]==0) cout<<"(X v Y' v Z v M')";
               	if (f[6]==0) cout<<"(X v Y' v Z' v M)";
               	if (f[7]==0) cout<<"(X v Y' v Z' v M')";
            }
            
            else if (k2==2)
            {
            	cout<<endl;
        	    cout<<"Y popoxakany fiktiv e:"<<endl;
        	    cout<<endl;
            	cout<<"Dizyunktiv dzev"<<endl;
			    if (f[0]==1) cout<<"X'Y'Z'M' v ";
               	if (f[1]==1) cout<<"X'Y'Z'M v ";
               	if (f[2]==1) cout<<"X'Y'Z M' v ";
               	if (f[3]==1) cout<<"X'Y'Z M v ";
               	if (f[8]==1) cout<<"X Y'Z'M' v ";
               	if (f[9]==1) cout<<"X Y'Z'M v ";
               	if (f[10]==1) cout<<"X Y'Z M' v ";
               	if (f[11]==1) cout<<"X Y'Z M v ";
            	cout<<endl;
            	cout<<endl;
            	cout<<"Konyuktiv dzev"<<endl;
			    if (f[0]==0) cout<<"(X v Y v Z v M)";
               	if (f[1]==0) cout<<"(X v Y v Z v M')";
              	if (f[2]==0) cout<<"(X v Y v Z' v M)";
               	if (f[3]==0) cout<<"(X v Y v Z' v M')";
               	if (f[8]==0) cout<<"(X' v Y v Z v M)";
               	if (f[9]==0) cout<<"(X' v Y v Z v M')";
              	if (f[10]==0) cout<<"(X' v Y v Z' v M)";
               	if (f[11]==0) cout<<"(X' v Y v Z' v M')";
            }
            
            else if (k3==3)
            {
            	cout<<endl;
        	    cout<<"Z popoxakany fiktiv e:"<<endl;
        	    cout<<endl;
            	cout<<"Dizyunktiv dzev"<<endl;
			    if (f[0]==1) cout<<"X'Y'Z'M' v ";
               	if (f[1]==1) cout<<"X'Y'Z'M v ";
               	if (f[4]==1) cout<<"X'Y Z'M' v ";
               	if (f[5]==1) cout<<"X'Y Z'M v ";
               	if (f[8]==1) cout<<"X Y'Z'M' v ";
               	if (f[9]==1) cout<<"X Y'Z'M v ";
               	if (f[12]==1) cout<<"X Y Z'M' v ";
               	if (f[13]==1) cout<<"X Y Z'M v ";
            	cout<<endl;
            	cout<<endl;
            	cout<<"Konyuktiv dzev"<<endl;
			    if (f[0]==0) cout<<"(X v Y v Z v M)";
               	if (f[1]==0) cout<<"(X v Y v Z v M')";
               	if (f[4]==0) cout<<"(X v Y' v Z v M)";
               	if (f[5]==0) cout<<"(X v Y' v Z v M')";
               	if (f[8]==0) cout<<"(X' v Y v Z v M)";
               	if (f[9]==0) cout<<"(X' v Y v Z v M')";
               	if (f[12]==0) cout<<"(X' v Y' v Z v M)";
               	if (f[13]==0) cout<<"(X' v Y' v Z v M')";
            }
            
            else if (k4==4)
            {
            	cout<<endl;
        	    cout<<"M popoxakany fiktiv e:"<<endl;
        	    cout<<endl;
            	cout<<"Dizyunktiv dzev"<<endl;
			    if (f[0]==1) cout<<"X'Y'Z'M' v ";
               	if (f[2]==1) cout<<"X'Y'Z M' v ";
               	if (f[4]==1) cout<<"X'Y Z'M' v ";
              	if (f[6]==1) cout<<"X'Y Z M' v ";
               	if (f[8]==1) cout<<"X Y'Z'M' v ";
               	if (f[10]==1) cout<<"X Y'Z M' v ";
               	if (f[12]==1) cout<<"X Y Z'M' v ";
              	if (f[14]==1) cout<<"X Y Z M' v ";
            	cout<<endl;
            	cout<<endl;
            	cout<<"Konyuktiv dzev"<<endl;
			    if (f[0]==0) cout<<"(X v Y v Z v M)";
              	if (f[2]==0) cout<<"(X v Y v Z' v M)";
               	if (f[4]==0) cout<<"(X v Y' v Z v M)";
               	if (f[6]==0) cout<<"(X v Y' v Z' v M)";
               	if (f[8]==0) cout<<"(X' v Y v Z v M)";
              	if (f[10]==0) cout<<"(X' v Y v Z' v M)";
               	if (f[12]==0) cout<<"(X' v Y' v Z v M)";
               	if (f[14]==0) cout<<"(X' v Y' v Z' v M)"; 
            }
            
        	break;
		}
	    case 8:	
	    {
	    	/*int x[8]={0,0,0,0,1,1,1,1};
        	int y[8]={0,0,1,1,0,0,1,1};
        	int z[8]={0,1,0,1,0,1,0,1};*/
        	
		    cout<<"Nermucel vektor: ";
         	for (i=0;i<n;i++)
            	cin>>f[i];	
            cout<<endl;	
	        cout<<"X Y Z F"<<endl;
	        cout<<"0 0 0 "<<f[0]<<endl;
         	cout<<"0 0 1 "<<f[1]<<endl;
        	cout<<"0 1 0 "<<f[2]<<endl;
	        cout<<"0 1 1 "<<f[3]<<endl;
	        cout<<"1 0 0 "<<f[4]<<endl;
	        cout<<"1 0 1 "<<f[5]<<endl;
        	cout<<"1 1 0 "<<f[6]<<endl;
        	cout<<"1 1 1 "<<f[7]<<endl;
        	
        	int k1=0,k2=0,k3=0;
        	for(i=0;i<n;i++)
        	{	
	            if (f[0]==f[4] && f[1]==f[5] && f[2]==f[6] && f[3]==f[7])
            	k1=1;
            	if (f[0]==f[2] && f[1]==f[3] && f[4]==f[6] && f[5]==f[7])
	            k2=2;
              	if (f[0]==f[1] && f[2]==f[3] && f[4]==f[5] && f[6]==f[7])
             	k3=3;
            }
    
            if (k1==0 && k2==0 && k3==0)
            {
            	cout<<endl;
                cout<<"Fiktiv popoxakanner chkan"<<endl;
                cout<<endl;
            	cout<<"Dizyunktiv dzev"<<endl;
            	if (f[0]==0 && f[1]==0 && f[2]==1 && f[3]==1 && f[4]==1 && f[5]==1 && f[6]==0 && f[7]==1)
            	{
            		cout<<"X'YZ' v X'YZ v XY'Z' v XY'Z v XYZ = X'Y(Z' v Z) v XY'(Z' v Z) v XYZ = X'Y v XY' v XYZ";
				}
            	else 
				{
				    if (f[0]==1) cout<<"X'Y'Z' v ";
                	if (f[1]==1) cout<<"X'Y'Z v ";
                	if (f[2]==1) cout<<"X'YZ' v ";
                	if (f[3]==1) cout<<"X'YZ v ";
                	if (f[4]==1) cout<<"XY'Z' v ";
                 	if (f[5]==1) cout<<"XY'Z v ";
                	if (f[6]==1) cout<<"XYZ' v ";
                	if (f[7]==1) cout<<"XYZ";
               }
            	cout<<endl;
            	cout<<endl;
            	cout<<"Konyuktiv dzev"<<endl;
            	if (f[0]==0 && f[1]==0 && f[2]==1 && f[3]==1 && f[4]==1 && f[5]==1 && f[6]==0 && f[7]==1)
            	{
            		cout<<"(X v Y v Z)(X v Y v Z')(X' v Y' v Z)=(XX  v XY v XZ' v XY v YY v YZ' v XZ v YZ v ZZ')(X' v Y' v Z)="<<endl;
                	cout<<"(X v Y v XY v X v Y)(X' v Y' v Z)=(X v XY v Y)(X' v Y' v Z)=(X v Y)(X' v Y' v Z)="<<endl;
                	cout<<"XX' v XY' v XZ v X'Y v YY' v YZ = XY' v X'Y v XZ v YZ"<<endl;
				}
            	else 
				{
			    	if (f[0]==0) cout<<"(X v Y v Z)";
                	if (f[1]==0) cout<<"(X v Y v Z')";
                	if (f[2]==0) cout<<"(X v Y' v Z)";
                	if (f[3]==0) cout<<"(X v Y' v Z')";
                	if (f[4]==0) cout<<"(X' v Y v Z)";
                	if (f[5]==0) cout<<"(X' v Y v Z')";
                	if (f[6]==0) cout<<"(X' v Y' v Z)";
                	if (f[7]==0) cout<<"(X' v Y' v Z')";
                }
                cout<<endl;
                cout<<endl;
                if (f[0]==0 && f[1]==0 && f[2]==1 && f[3]==1 && f[4]==1 && f[5]==1 && f[6]==0 && f[7]==1)
                {
                	cout<<"Jegalkini bazmandam:"<<endl;
                    cout<<"XY' v X'Y v XZ v YZ = ((XY')' v (X'Y)' v (XZ)' v (YZ)')' = ((XY')' v (X'Y)' v (XZ)' v (YZ)') + 1 = "<<endl;
                    cout<<"(x(y + 1) + 1)(y(x + 1) + 1)(xz + 1)(yz + 1) + 1 = (xy + x + 1)(yx + y + 1)(xz + 1)(yz + 1) = "<<endl;
				    cout<<"(xy + xy + xy + xy + xy + x + xy + y + 1)(xyz + xz + yz + 1) + 1 = (x + y + 1)(xyz + xz + yz + 1) + 1 = "<<endl;
                    cout<<"xyz + xz + xy + xyz + x + xyz + xyz + yz + y + xyz + xz + yz + 1 + 1 = x + y + xyz"<<endl;
				}
		    }
            else if (k1==1 && k2==2 && k3==3)
            {
            	cout<<endl;
            	cout<<"Bolor popoxakannern fiktiv en"<<endl;
			}
			
			else if (k1==1 && k2==2)
			{
				cout<<endl;
        	    cout<<"X,Y popoxakannery fiktiv en:"<<endl;
        	    cout<<"Z F"<<endl;
             	cout<<"0 "<<f[0]<<endl;
    	        cout<<"1 "<<f[1]<<endl;
    	        cout<<endl;
             	cout<<"Dizyunktiv dzev"<<endl;
            	if (f[0]==1) cout<<"X'";
            	if (f[1]==1) cout<<"X";
            	cout<<endl;
            	cout<<endl;
            	cout<<"Konyuktiv dzev"<<endl;
            	if (f[0]==0) cout<<"X";
            	if (f[1]==0) cout<<"X'";
			}
			
            else if (k1==1)
            {
            	cout<<endl;
        	    cout<<"X popoxakany fiktiv e:"<<endl;
            	cout<<"Y Z F"<<endl;
            	cout<<"0 0 "<<f[0]<<endl;
            	cout<<"0 1 "<<f[1]<<endl;
            	cout<<"1 0 "<<f[2]<<endl;
            	cout<<"1 1 "<<f[3]<<endl;
            	cout<<endl;
            	cout<<"Dizyunktiv dzev"<<endl;
            	if (f[0]==1) cout<<"Y'Z' v ";
            	if (f[1]==1) cout<<"Y'Z v ";
            	if (f[2]==1) cout<<"YZ' v ";
            	if (f[3]==1) cout<<"YZ";
            	cout<<endl;
            	cout<<endl;
            	cout<<"Konyuktiv dzev"<<endl;
            	if (f[0]==0) cout<<"(Y v Z)";
            	if (f[1]==0) cout<<"(Y v Z')";
            	if (f[2]==0) cout<<"(Y' v Z)";
            	if (f[3]==0) cout<<"(Y' v Z')";
        	}
        	else if (k2==2)
        	{
     	    	cout<<endl;
            	cout<<"Y popoxakany fiktiv e:"<<endl;
            	cout<<"X Z F"<<endl;
            	cout<<"0 0 "<<f[0]<<endl;
    	        cout<<"0 1 "<<f[1]<<endl;
            	cout<<"1 0 "<<f[4]<<endl;
            	cout<<"1 1 "<<f[5]<<endl;
             	cout<<endl;
            	cout<<"Dizyunktiv dzev"<<endl;
            	if (f[0]==1) cout<<"X'Z' v ";
            	if (f[1]==1) cout<<"X'Z v ";
            	if (f[4]==1) cout<<"XZ' v ";
            	if (f[5]==1) cout<<"XZ";
            	cout<<endl;
            	cout<<endl;
            	cout<<"Konyuktiv dzev"<<endl;
            	if (f[0]==0) cout<<"(X v Z)";
            	if (f[1]==0) cout<<"(X v Z')";
            	if (f[4]==0) cout<<"(X' v Z)";
            	if (f[5]==0) cout<<"(X' v Z')";
	        }
	        else if (k3==3)
	        {
	        	cout<<endl;
        	    cout<<"Z popoxakany fiktiv e:"<<endl;
            	cout<<"X Y F"<<endl;
            	cout<<"0 0 "<<f[0]<<endl;
            	cout<<"0 1 "<<f[2]<<endl;
            	cout<<"1 0 "<<f[4]<<endl;
        	    cout<<"1 1 "<<f[6]<<endl;
        	    cout<<endl;
            	cout<<"Dizyunktiv dzev"<<endl;
            	if (f[0]==1) cout<<"X'Y' v ";
            	if (f[2]==1) cout<<"X'Y v ";
            	if (f[4]==1) cout<<"XY' v ";
            	if (f[6]==1) cout<<"XY";
            	cout<<endl;
            	cout<<endl;
            	cout<<"Konyuktiv dzev"<<endl;
            	if (f[0]==0) cout<<"(X v Y)";
            	if (f[2]==0) cout<<"(X v Y')";
            	if (f[4]==0) cout<<"(X' v Y)";
            	if (f[6]==0) cout<<"(X' v Y')";
	        }	
	        	
			break;
        }
        case 4:
        {
        	/*int x[4]={0,0,1,1};
        	int y[4]={0,1,0,1};*/
        	
        	cout<<"Nermucel vektor: ";
         	for (i=0;i<n;i++)
            	cin>>f[i];	
            cout<<endl;
	        cout<<"X Y F"<<endl;
	        cout<<"0 0 "<<f[0]<<endl;
         	cout<<"0 1 "<<f[1]<<endl;
        	cout<<"1 0 "<<f[2]<<endl;
	        cout<<"1 1 "<<f[3]<<endl;
	        
	        int k1=0,k2=0;
        	for(i=0;i<n;i++)
        	{	
	            if (f[0]==f[2] && f[1]==f[3])
            	k1=1;
            	if (f[0]==f[1] && f[2]==f[3])
	            k2=2;
            }
            if (k1==0 && k2==0)
            {
            	cout<<endl;
            	cout<<"Fiktiv popoxakanner chkan"<<endl;
            	cout<<endl;
            	cout<<"Dizyunktiv dzev"<<endl;
            	if (f[0]==1) cout<<"X'Y' v ";
            	if (f[1]==1) cout<<"X'Y v ";
            	if (f[2]==1) cout<<"XY' v ";
            	if (f[3]==1) cout<<"XY";
            	cout<<endl;
            	cout<<endl;
            	cout<<"Konyuktiv dzev"<<endl;
            	if (f[0]==0) cout<<"(X v Y)";
            	if (f[1]==0) cout<<"(X v Y')";
            	if (f[2]==0) cout<<"(X' v Y)";
            	if (f[3]==0) cout<<"(X' v Y')";
            	
			}
            else if (k1==1 && k2==2)
            {
            	cout<<endl;
            	cout<<"Bolor popoxakannern fiktiv en"<<endl;
			}
            else if (k1==1)
            {
            	cout<<endl;
        	    cout<<"X popoxakany fiktiv e:"<<endl;
            	cout<<"Y F"<<endl;
            	cout<<"0 "<<f[0]<<endl;
            	cout<<"1 "<<f[1]<<endl;
            	cout<<endl;
             	cout<<"Dizyunktiv dzev"<<endl;
            	if (f[0]==1) cout<<"Y'";
            	if (f[1]==1) cout<<"Y";
            	cout<<endl;
            	cout<<endl;
            	cout<<"Konyuktiv dzev"<<endl;
            	if (f[0]==0) cout<<"(Y)";
            	if (f[1]==0) cout<<"(Y')";
        	}
        	else if (k2==2)
        	{
     	    	cout<<endl;
            	cout<<"Y popoxakany fiktiv e:"<<endl;
             	cout<<"X F"<<endl;
             	cout<<"0 "<<f[0]<<endl;
    	        cout<<"1 "<<f[2]<<endl;
    	        cout<<endl;
             	cout<<"Dizyunktiv dzev"<<endl;
            	if (f[0]==1) cout<<"X'";
            	if (f[2]==1) cout<<"X";
            	cout<<endl;
            	cout<<endl;
            	cout<<"Konyuktiv dzev"<<endl;
            	if (f[0]==0) cout<<"(X)";
            	if (f[2]==0) cout<<"(X')";
	        }
	        
        	break;
		}
        	
        default:
		{
   	    cout<<"Error";
		break;
        }
   }
		
	return 0;
}
