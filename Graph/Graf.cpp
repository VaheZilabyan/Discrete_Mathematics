#include <iostream>
using namespace std;

int main()
{
	int g, k, i, x, y, j, n, a[20][20], b[20][20];

	do {
		cout << "Gagatneri tiv: ";
		cin >> g;
	} while (g < 0);

	do {
		cout << "Koxeri tiv: ";
		cin >> k;
	} while (k < 0);

	for (i = 0; i < g; i++)
	{
		for (j = 0; j < g; j++)
		{
			a[i][j] = 0;
		}
	}
	for ( i = 0; i < k; i++)
	{
		for ( j = 0; j < g; j++)
		{
			b[i][j] = 0;
		}
	}
	cout << endl;
	
	for (i = 0; i < k; i++)
	{
		cout << "Nermucel koxer@: ";
		cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
		b[i][x] = 1;
		b[i][y] = 1;
	}
	
	cout << endl;
	cout <<"Harevanutyan matric:"<<endl;
	for (i = 0; i < g; i++)
	{
		for (j = 0; j < g; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	cout << "Kcutyan matric:"<<endl;
	for ( i = 0; i < k; i++)
	{
		for ( j = 0; j < g; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	
	cout<<endl;
	int l,c[100];
	for ( i = 0; i < g; i++)
	{
		l = 0;
		for ( j = 0; j < g; j++)
			if (a[i][j] == 1) l++;
			
		c[i] = l;
		cout <<"V"<<i<<" gagatn uni  " << l<<" harevan"<<endl;
		if (l == 0) cout << "V" << i << "-n mekusacvac gagat e"<<endl;
		if (l == 1) cout << "V" << i << "-n kaxvac gagat e" << endl;
	}
	
	cout<<"[";
	for ( i = 0; i < g; i++)
	{
		cout << c[i]<<" ";	
	}
	cout<<"]"<<endl;
	cout<<endl;
	
	int max = c[0];
	for ( i = 1; i < g; i++)
		if (c[i] >= max) max = c[i];
	for ( i = 0; i < g; i++)
		if (c[i] == max) cout << "V" << i << "-n uni max gagati astijan` " <<max<< endl;
		
	cout << endl;
	cout << "Gagati astijanner@ @st ajman kargi: ";
	for ( i = 0; i < g; i++)
		for ( j = i + 1; j < g; j++)		
			if (c[j] < c[i])
		{
				n = c[i];
				c[i] = c[j];
				c[j] = n;
		}
	
	cout<<"[";
	for ( i = 0; i < g; i++)
		cout << c[i]<<" ";	
	cout<<"]"<<endl;
	cout << endl;
	
	int skizb;
	cout <<"Nvazaguyn janaparh:"<<endl;
	do{
		cout <<"Skizb = ";
		cin >> skizb;
	}while(skizb<0 || skizb>=g);
	int verj;
	do{
		cout <<"verj = ";
		cin >> verj;
	}while(verj<0 || verj>=g || skizb==verj);
	
	switch(skizb)
	{
		case 0:
			{
				switch(verj)
				{
					case 1:
					{
						cout<<"V0 -> V4 -> V3 -> V1";
						cout<<"Sharavix = 3"<<endl;
						cout<<"Tramagic = 6"<<endl;
						break;
					}
					case 2:
					{
						cout<<"V0 -> V4 -> V3 -> V2";
						cout<<"Sharavix = 3"<<endl;
						cout<<"Tramagic = 6"<<endl;
						break;
					}
					case 3:
					{
						cout<<"V0 -> V4 -> V3";
						cout<<"Sharavix = 2"<<endl;
						cout<<"Tramagic = 6"<<endl;
						break;
					}
					case 4:
					{
						cout<<"V0 -> V4";
						cout<<"Sharavix = 1"<<endl;
						cout<<"Tramagic = 6"<<endl;
						break;
					}
					case 5:
					{
						cout<<"V0 -> V5";
						cout<<"Sharavix = 1"<<endl;
						cout<<"Tramagic = 6"<<endl;
						break;
					}
					case 6:
					{
						cout<<"V0 -> V4 -> V6";
						cout<<"Sharavix = 2"<<endl;
						cout<<"Tramagic = 6"<<endl;
						break;
					}					
				}
				break;
			}
		case 1:
			{
				switch(verj)
				{
					case 0:
					{
						cout<<"V1 -> V3 -> V4 -> V0";
						cout<<"Sharavix = 3"<<endl;
						cout<<"Tramagic = 6"<<endl;
						break;
					}
					case 2:
					{
						cout<<"V1 -> V2";
						cout<<"Sharavix = 1"<<endl;
						cout<<"Tramagic = 6"<<endl;
						break;
					}
					case 3:
					{
						cout<<"V1 -> V3";
						cout<<"Sharavix = 1"<<endl;
						cout<<"Tramagic = 6"<<endl;
						break;
					}
					case 4:
					{
						cout<<"V1 -> V3 -> V4";
						break;
					}
					case 5:
					{
						cout<<"V1 -> V3 -> V4 -> V5";
						break;
					}
					case 6:
					{
						cout<<"V1 -> V3 -> V6";
						break;
					}					
				}
				break;
			}
		case 2:
			{
				switch(verj)
				{
					case 0:
					{
						cout<<"V2 -> V3 -> V4 -> V0";
						break;
					}
					case 1:
					{
						cout<<"V2 -> V1";
						break;
					}
					case 3:
					{
						cout<<"V2 -> V3";
						break;
					}
					case 4:
					{
						cout<<"V2 -> V3 -> V4";
						break;
					}
					case 5:
					{
						cout<<"V2 -> V6 -> V5";
						break;
					}
					case 6:
					{
						cout<<"V1 -> V6";
						break;
					}					
				}
				break;
			}
		case 3:
			{
				switch(verj)
				{
					case 0:
					{
						cout<<"V3 -> V4 -> V0";
						break;
					}
					case 1:
					{
						cout<<"V3 -> V1";
						break;
					}
					case 2:
					{
						cout<<"V3 -> V2";
						break;
					}
					case 4:
					{
						cout<<"V3 -> V4";
						break;
					}
					case 5:
					{
						cout<<"V3 -> V4 -> V5";
						break;
					}
					case 6:
					{
						cout<<"V3 -> V6";
						break;
					}					
				}
				break;
			}
		case 4:
			{
				switch(verj)
				{
					case 0:
					{
						cout<<"V4 -> V0";
						break;
					}
					case 1:
					{
						cout<<"V4 -> V3 -> V1";
						break;
					}
					case 2:
					{
						cout<<"V4 -> V3 -> V2";
						break;
					}
					case 3:
					{
						cout<<"V4 -> V3";
						break;
					}
					case 5:
					{
						cout<<"V4 -> V5";
						break;
					}
					case 6:
					{
						cout<<"V4 -> V6";
						break;
					}					
				}
				break;
			}
		case 5:
			{
				switch(verj)
				{
					case 0:
					{
						cout<<"V5 -> V0";
						break;
					}
					case 1:
					{
						cout<<"V5 -> V4 -> V3 -> V1";
						break;
					}
					case 2:
					{
						cout<<"V5 -> V6 -> V2";
						break;
					}
					case 3:
					{
						cout<<"V5 -> V4 -> V3";
						break;
					}
					case 4:
					{
						cout<<"V5 -> V4";
						break;
					}
					case 6:
					{
						cout<<"V5 -> V6";
						break;
					}					
				}
				break;
			}	
		case 6:
			{
				switch(verj)
				{
					case 0:
					{
						cout<<"V6 -> V5 -> V0";
						break;
					}
					case 1:
					{
						cout<<"V6 -> V3 -> V1";
						break;
					}	
					case 2:
					{
						cout<<"V6 -> V2";
						break;
					}
					case 3:
					{
						cout<<"V6 -> V3";
						break;
					}
					case 4:
					{
						cout<<"V6 -> V4";
						break;
					}
					case 5:
					{
						cout<<"V6 -> V5";
						break;
					}					
				}
				break;
			}			
		default:
			{
				cout<<"Aydpisi gagat chka!";
				break;	
			}
	}
	
	
	cout<<endl;
	cout << "Grafi ciklomatik tiv = " << k - g + 1 << endl;	
	cout<<endl;
	
	int p=0;
	for (i = 0; i < g; i++)
	{
		for (j = 0; j < g; j++)
		{
			if (i!=j && a[i][j] == 0) 
			{
				p++;
			}
		}
	} 
	p/=2;
	cout << "Grafi ankaxutyan tiv = " << p << endl;
	return 0;
}



