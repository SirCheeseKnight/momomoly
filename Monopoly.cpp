#include <iostream>
#include <cstdlib> 
using namespace std;
int main()
{
    int c=0;
    int v[40];
    int i,r;
    for (i=0;i<40;++i) v[i]=0;
    r=rand();
        c=c+r%11+2;
        c=c%40;
        v[c]=v[c]+1;
	
    for (i=1;i<10000000;++i)
    {
      if (c==7 || c==22 || c==36)
	{
	  r=rand();
	  if (r%16==0) {
	    c=39;
	    v[39]++;
	    i++;
	  }
	  if (r%16==1) {
	    c=0;
	    v[0]++;
	    i++;
	  }
	  if (r%16==2) {
	    c=24;
	    v[24]++;
	    i++;
	  }
	  if (r%16==3) {
	    c=11;
	    v[11]++;
	    i++;
	  }
	  if (r%16==4 || r%16==5) {
	    if (c==7) {
	      c=15;
	      v[15]++;
	      i++;
	    }
	    else if (c==22){
	      c=25;
	      v[25]++;
	      i++;
	    }
	    else{
	      c=5;
	      v[5]++;
	      i++;
	    }
	  }
	  if (r%16==6) {
	    if (c==22){
	      c=28;
	      v[28]++;
	       i++;
	    }
	    else{
	      c=12;
	      v[12]++;
	       i++;
	    }
	  }
	  if (r%16==9)
	    {
	      c=c-3;
	      c=c%40;
	      v[c]=v[c]+1;
	       i++;
	    }
	  if (r%16==13) {
	    c=5;
	    v[5]++;
	     i++;
	  }
	  else if (r%16==10) c=30;
	}
      if (c==2 || c==17 || c==33)
	{
	  r=rand();
	  if (r%16==0) {
	    c=0;
	    v[0]++;
	    i++;
	  }
	  if (r%16==5) c=30;
	}
      r=rand();
      if (c==30)
	  {
	    c=10;
	    v[10]++;
	    i++;
	    r=rand();
	    if ((r%11+2)%2==0){
	       c=c+r%11+2;
	       c=c%40;
	       v[c]=v[c]+1;
	    }
	    else
	      {
		v[10]++;
		i++;
		r=rand();
		if ((r%11+2)%2==0){
		  c=c+r%11+2;
		  c=c%40;
		  v[c]=v[c]+1;
		}
	      }
	  }
        else if ((r%11+2)%2==0)
        {
	  r=rand();
        c=c+r%11+2;
        c=c%40;
        v[c]=v[c]+1;
            i=i+1;
            r=rand();
            c=c+r%11+2;
            c=c%40;
            v[c]=v[c]+1;
            if ((r%11+2)%2==0)
            {
                i=i+1;
                r=rand();
                if ((r%11+2)%2==0) c=10;
                else c=c+r%11+2;
                c=c%40;
                v[c]=v[c]+1;
            }
        }
	else
	  {
	    r=rand();
        c=c+r%11+2;
        c=c%40;
        v[c]=v[c]+1;
	  }
    }
cout<<"Go: "<<v[0]/100000.0<<endl;
cout<<"Community Chest: "<<(v[2]+v[17]+v[33])/100000.0<<endl;
cout<<"Income Tax: "<<v[4]/100000.0<<endl;
cout<<"Reading Railroad: "<<v[5]/100000.0<<endl;
cout<<"Chance: "<<(v[7]+v[36]+v[22])/100000.0<<endl;
cout<<"Jail / Just Visiting: "<<v[10]/100000.0<<endl;
cout<<"Electric Company: "<<v[12]/100000.0<<endl;
cout<<"Pennsylvania Railroad: "<<v[12]/100000.0<<endl;
cout<<"Free Parking: "<<v[20]/100000.0<<endl;
cout<<"B. & O. Railroad: "<<v[25]/100000.0<<endl;
cout<<"Water Works: "<<v[28]/100000.0<<endl;
cout<<"Go To Jail: "<<v[30]/100000.0<<endl;
cout<<"Short Line: "<<v[35]/100000.0<<endl;
cout<<"Luxury Tax: "<<v[38]/100000.0<<endl<<endl;

cout<<"Railroads: "<<(v[35]+v[25]+v[15]+v[5])/100000.0<<endl<<endl;

cout<<"Mediterranean Avenue: "<<v[1]/100000.0<<endl;
cout<<"Baltic Avenue: "<<v[3]/100000.0<<endl<<endl;

cout<<"Brown: "<<(v[1]+v[3])/100000.0<<endl<<endl;

cout<<"Oriental Avenue: "<<v[6]/100000.0<<endl;
cout<<"Vermont Avenue: "<<v[8]/100000.0<<endl;
cout<<"Connecticut Avenue: "<<v[9]/100000.0<<endl<<endl;

cout<<"Light Blue: "<<(v[6]+v[8]+v[9])/100000.0<<endl<<endl;

cout<<"St. Charles Place: "<<v[11]/100000.0<<endl;
cout<<"States Avenue: "<<v[13]/100000.0<<endl;
cout<<"Virginia Avenue: "<<v[14]/100000.0<<endl<<endl;

cout<<"Purple: "<<(v[11]+v[13]+v[14])/100000.0<<endl<<endl;

cout<<"St. James Place: "<<v[16]/100000.0<<endl;
cout<<"Tennessee Avenue: "<<v[18]/100000.0<<endl;
cout<<"New York Avenue: "<<v[19]/100000.0<<endl<<endl;

cout<<"Orange: "<<(v[16]+v[18]+v[19])/100000.0<<endl<<endl;

cout<<"Kentucky Avenue: "<<v[21]/100000.0<<endl;
cout<<"Indiana Avenue: "<<v[23]/100000.0<<endl;
cout<<"Illinois Avenue: "<<v[24]/100000.0<<endl<<endl;

cout<<"Red: "<<(v[21]+v[23]+v[24])/100000.0<<endl<<endl;

cout<<"Atlantic Avenue: "<<v[26]/100000.0<<endl;
cout<<"Ventnor Avenue: "<<v[27]/100000.0<<endl;
cout<<"Marvin Gardens: "<<v[29]/100000.0<<endl<<endl;

cout<<"Yellow: "<<(v[26]+v[27]+v[29])/100000.0<<endl<<endl;

cout<<"Pacific Avenue: "<<v[31]/100000.0<<endl;
cout<<"North Carolina Avenue: "<<v[32]/100000.0<<endl;
cout<<"Pennsylvania Avenue: "<<v[34]/100000.0<<endl<<endl;

cout<<"Green: "<<(v[31]+v[32]+v[34])/100000.0<<endl<<endl;

cout<<"Park Place: "<<v[37]/100000.0<<endl;
cout<<"Boardwalk: "<<v[39]/100000.0<<endl<<endl;

cout<<"Blue: "<<(v[37]+v[39])/100000.0<<endl<<endl;


}
