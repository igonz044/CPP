#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
int x = 1;
string emails [] = { "aeade@certisbio.com", "amelia.cadwell@suterra.com", "usa.regn@shardaintl.com", "bguess@marronebio.com",
"btipton@cultiva.com",
"bwheeler@marronebio.com",
"candace.wilson@farmersbusinessnetwork.com",
"chazb@growerssecret.com",
"cjudd@certisbio.com",
"cwooley@wilburellis.com",
"cbishop@marronebio.com",
"dann93001@gmail.com",
"dmcdowell@marronebio.com",
"etrejo@wilburellis.com",
"emily.murphy@stratagon.com",
"emcewen@gowanco.com",
"ethan.caldwell@nufarm.com",
"evan@genericcropscience.com",
"ealemu@certisbio.com",
"jtebbe@gowanco.com",
"jkuhlemeier@agbiome.com",
"jwestphal@rainbird.com",
"jwitcher@aceto.com",
"johni@amvac.com",
"julia.king@adfarm.com",
"kelmernissi@marronebio.com",
"kevin@tidalvisionusa.com",
"kowat@certisbio.com",
"rdwest@westbridge.com",
"lesliefriend@laurel-ag.com",
"lguthrie@marronebio.com",
"lvieira@wilburellis.com",
"lgrant@bio-save.com",
"mafortin@farmersbusinessnetwork.com",
"mimoto@cultiva.com",
"matt.weeks@adfarm.com",
"mbrodman@farmersbusinessnetwork.com",
"micahs@amvac.com",
"mlarose@biosafesystems.com",
"nstratinsky@central.com",
"neil@farmersbusinessnetwork.com",
"ppathak@marronebio.com",
"patrick.walther@agvisorpro.com",
"mcghee@pacificbiocontrol.com",
"rbagmarketing@rainbird.com",
"rgibson@certisbio.com",
"smusser@cultiva.com",
"seth.pratt@vlsci.com",
"swooldridge@farmersbusinessnetwork.com",
"tlewis@wilburellis.com",
"tpetraitis@central.com",
"thoover@marronebio.com",
"tedw@amvac.com",
"terry@genericcropscience.com",
"timarie@mcmarketingcompany.com",
"tims@albaughllc.com",
"zsanchez@gowanco.com",
"wrenc@growerssecret.com",
"chyanns@growerssecret.com",
"nick.saik@agvisorpro.com",
"joe.middione@agvisorpro.com",
"andrew.platten@agvisorpro.com",
"amccormick@marronebio.com"};

string names [] = {
  "Amanda", "Amelia", "Ashish", "Brian", "Brian", "Bruce", "Candace","Chaz", "Chris", "Chris", "Cindy", "Dann", "Doug", "Elyssa", "Emily",
  "Eric", "Ethan", "Evan", "Eyob", "Jacob", "Jason", "Jeff", "Joe", "John", "Julia", "Kamal", "Kevin", "Kirk", "Larry", "Leslie", "Lindsay", "Lindsey",
  "Lucie", "Marc", "Matt", "Matt", "Meg", "Micah", "Michael", "Nancy", "Neil", "Pankaj", "Patrick", "Peter", "Rain Bird", "Robert", "Sean", "Seth",
  "Stephanie", "Tara", "Tara", "Taylor", "Ted", "Terry", "Timarie", "Tim", "Zoi", "Wren", "Chyann", "Nick", "Joe", "Andrew", "Anh" };

int arrSize = sizeof(names)/sizeof(names[0]);
freopen("output.txt","w",stdout);
for (int i = 0; i < arrSize; i++)
{
  cout << "\n\n\n\n" << emails[i];
  cout << "\nHelp improve RDA\n\nHello " << names[i] << ",\n\nI recently joined RDA and I would like to introduce myself. I am the new User Experience Engineer for RDA and I will be conducting research about the experience our interface provides to understand your needs.\nWe’d greatly appreciate any feedback or ideas you have for The RDA Dashboard Tableau site. Our goal is to make our service intuitive, helpful, time-saving, and as accurate as possible.\nIf there are any changes you’d like to see, please let us know. These may include: additional tools or capabilities, expanded data offerings, changes in product ownership, and design ideas.\nAs always, we’d be happy to give you a training refresh at your convenience – just let us know when you have 30-45 minutes free time!\n\nRespond to this email with your ideas and I will answer as promptly as possible. I am looking forward to working with you.\n\nThank you,\nItzel Gonzalez \nUX Engineer\nClientCare@RawDataAnalytics.com\n(805) 340-7683" << x;
}

 cout << "\n\nDid this WOrk???";

return 0;

}
