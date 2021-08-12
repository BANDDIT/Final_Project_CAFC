#include<bits/stdc++.h>
using namespace std;
char nama[255],hsl1[255],hsl2[255],hsl3[255],help;//varibel ini untuk penamaan
char penyakit[255];


void albino_dkk_2(){
	//Bagian ini untuk penyakit albino dan thalassemia
	int check=1;
	while(check==1){
		int kondisi=0,pos=0;
		
		if(help==4)pos=3;
		else pos=4;
		printf("%d\n",help);
		while(kondisi<1||kondisi>pos){
			system("CLS");
			printf("88888   888    8     8   88888  8      8   8                       88      8888                       8888\n");
			printf("8      8   8  8 8   8 8    8    8      8   8                        88    888888                     888888\n");
			printf("88888  88888  8  8 8  8    8    8       8 8                          88   888888                     888888\n");
			printf("8      8   8  8   8   8    8    8        8                            88   8888                      888888\n");
			printf("8      8   8  8       8  88888  88888    8                             888888888888               888888888888\n");
			printf("                                                                         88888888 88             88 88888888 88\n");
			printf(" 8888   888   8888   88888                                               88888888  88    888    88  88888888  88\n");
			printf("8      8   8  8   8  8                                                   88888888   88  88888  88    888888    88\n");
			printf("8      88888  8888   888                                                 88888888    88  888  88     888888     88\n");
			printf("8      8   8  8  8   8                                                   88888888     888888888     88888888\n");
			printf(" 8888  8   8  8   8  88888                                               888  888    8 8888888 8   8888888888\n");
			printf("                                                                         888  888    8 8888888 8  88888888888\n");
			printf(" 8888   888   8       8888  8   8  8       888   88888   888   8888      888  888    8 8888888 8  888888888888\n");
			printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8   8     888  888      88   88    888888888888\n");
			printf("8      88888  8      8      8   8  8      88888    8    8   8  8888      888  888      88   88       88  88\n");
			printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8  8      888  888      88   88       88  88\n");
			printf(" 8888  8   8  88888   8888   888   88888  8   8    8     888   8   8     888  888      88   88       88  88\n");
			printf("=====================================================================================================================\n");
			printf("\n");
			printf("Pilihlah Status Kesehatan Genetik Anda:\n");
			printf("1.%s\n",hsl3);
			printf("2.%s\n",hsl2);
			printf("3.%s\n",hsl1);
			if(help==5)printf("4.Sehat tapi tidak tau carrier atau normal\n");
			printf("\n");
			printf("Silahkan Pilih Opsi Anda:\n");
			scanf("%d",&kondisi);
		}
		system("CLS");
		printf("88888   888    8     8   88888  8      8   8                       88      8888                       8888\n");
		printf("8      8   8  8 8   8 8    8    8      8   8                        88    888888                     888888\n");
		printf("88888  88888  8  8 8  8    8    8       8 8                          88   888888                     888888\n");
		printf("8      8   8  8   8   8    8    8        8                            88   8888                      888888\n");
		printf("8      8   8  8       8  88888  88888    8                             888888888888               888888888888\n");
		printf("                                                                         88888888 88             88 88888888 88\n");
		printf(" 8888   888   8888   88888                                               88888888  88    888    88  88888888  88\n");
		printf("8      8   8  8   8  8                                                   88888888   88  88888  88    888888    88\n");
		printf("8      88888  8888   888                                                 88888888    88  888  88     888888     88\n");
		printf("8      8   8  8  8   8                                                   88888888     888888888     88888888\n");
		printf(" 8888  8   8  8   8  88888                                               888  888    8 8888888 8   8888888888\n");
		printf("                                                                         888  888    8 8888888 8  88888888888\n");
		printf(" 8888   888   8       8888  8   8  8       888   88888   888   8888      888  888    8 8888888 8  888888888888\n");
		printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8   8     888  888      88   88    888888888888\n");
		printf("8      88888  8      8      8   8  8      88888    8    8   8  8888      888  888      88   88       88  88\n");
		printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8  8      888  888      88   88       88  88\n");
		printf(" 8888  8   8  88888   8888   888   88888  8   8    8     888   8   8     888  888      88   88       88  88\n");
		printf("=====================================================================================================================\n");
		printf("\n");
		printf("Status Anda: ");
		if(kondisi==1)printf("%s\n",hsl3);
		else if(kondisi==2)printf("%s\n",hsl2);
		else if(kondisi==3)printf("%s\n",hsl1);
		else printf("Sehat tapi tidak tau carrier atau normal");
		printf("Penyakit yang Anda Pilih: %s\n",penyakit);
		printf("\n");
		
		printf("Kemungkinan-Kemungkinan yang Ada:\n");
		if(kondisi==1||kondisi==4){
			if(kondisi==4)printf("Jika Anda Normal:\n");
			printf("a)Ayah %s - Ibu %s\n",hsl3,hsl3);
			printf("b)Ayah %s - Ibu %s\n",hsl3,hsl2);
			printf("c)Ayah %s - Ibu %s\n",hsl2,hsl3);
			printf("d)Ayah %s - Ibu %s\n",hsl2,hsl2);
		}
		if(kondisi==2||kondisi==4){
			if(kondisi==4)printf("Jika Anda Carrier:\n");
			printf("a)Ayah %s - Ibu %s\n",hsl3,hsl2);
			printf("b)Ayah %s - Ibu %s\n",hsl2,hsl3);
			printf("c)Ayah %s - Ibu %s\n",hsl3,hsl1);
			printf("d)Ayah %s - Ibu %s\n",hsl1,hsl3);	
			printf("e)Ayah %s - Ibu %s\n",hsl2,hsl2);
			printf("f)Ayah %s - Ibu %s\n",hsl2,hsl1);
			printf("g)Ayah %s - Ibu %s\n",hsl1,hsl2);
		}
		if(kondisi==3){
			printf("a)Ayah %s - Ibu %s\n",hsl2,hsl2);
			printf("b)Ayah %s - Ibu %s\n",hsl1,hsl2);
			printf("c)Ayah %s - Ibu %s\n",hsl2,hsl1);
			printf("d)Ayah %s - Ibu %s\n",hsl1,hsl1);		
		}
		printf("NOTE: Tidak Ada Kemungkinan Lain Selain Kondisi yang Sudah Dijabarkan.\n");
		printf("\n");
		printf("=====================================================================================================================\n");
		printf("Pilihlah Opsi Dibawah Ini:\n");
		printf("1.Saya masih ingin tetap menjalankan halaman ini.\n");
		printf("2.Saya ingin keluar dari halaman ini.\n");
		printf("Silahkan Pilih Opsi Anda:\n");	
		scanf("%d",&check);
	}
	
}

void albino_dkk_1(){
	//Bagian ini untuk penyakit albino dan thalassemia
	int check=1;
	while(check==1){
		int kondisi=0,pos=0;
		
		if(help==4)pos=3; //thala i guess?
		else pos=4;
		printf("%d\n",help);

		int kondisiIstri=0;
		int kondisiSuami=0;
		//Mengecek kondisi kesehatan
		while((kondisiSuami<1||kondisiSuami>pos)||(kondisiIstri<1||kondisiIstri>pos)){
			system("CLS");
			printf("88888   888    8     8   88888  8      8   8                       88      8888                       8888\n");
			printf("8      8   8  8 8   8 8    8    8      8   8                        88    888888                     888888\n");
			printf("88888  88888  8  8 8  8    8    8       8 8                          88   888888                     888888\n");
			printf("8      8   8  8   8   8    8    8        8                            88   8888                      888888\n");
			printf("8      8   8  8       8  88888  88888    8                             888888888888               888888888888\n");
			printf("                                                                         88888888 88             88 88888888 88\n");
			printf(" 8888   888   8888   88888                                               88888888  88    888    88  88888888  88\n");
			printf("8      8   8  8   8  8                                                   88888888   88  88888  88    888888    88\n");
			printf("8      88888  8888   888                                                 88888888    88  888  88     888888     88\n");
			printf("8      8   8  8  8   8                                                   88888888     888888888     88888888\n");
			printf(" 8888  8   8  8   8  88888                                               888  888    8 8888888 8   8888888888\n");
			printf("                                                                         888  888    8 8888888 8  88888888888\n");
			printf(" 8888   888   8       8888  8   8  8       888   88888   888   8888      888  888    8 8888888 8  888888888888\n");
			printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8   8     888  888      88   88    888888888888\n");
			printf("8      88888  8      8      8   8  8      88888    8    8   8  8888      888  888      88   88       88  88\n");
			printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8  8      888  888      88   88       88  88\n");
			printf(" 8888  8   8  88888   8888   888   88888  8   8    8     888   8   8     888  888      88   88       88  88\n");
			printf("=====================================================================================================================\n");
			printf("\n");
			printf("Pilihlah Status Kesehatan Suami:\n"); //laki-laki
			printf("1.%s\n",hsl3);
			printf("2.%s\n",hsl2);
			printf("3.%s\n",hsl1);
			if(pos==4)printf("4.Sehat tapi tidak tau carrier atau normal\n");
			printf("\n");
			printf("Silahkan Pilih Opsi Anda:\n");
			scanf("%d",&kondisiSuami);
			printf("\n");
			printf("=====================================================================================================================\n");
			printf("\n");
			printf("Pilihlah Status Kesehatan Istri:\n"); //isthree
			printf("1.%s\n",hsl3);
			printf("2.%s\n",hsl2);
			printf("3.%s\n",hsl1);
			if(pos==4)printf("4.Sehat tapi tidak tau carrier atau normal\n");
			printf("\n");
			printf("Silahkan Pilih Opsi Anda:\n");
			scanf("%d",&kondisiIstri);
		}

		system("CLS");
		printf("88888   888    8     8   88888  8      8   8                       88      8888                       8888\n");
		printf("8      8   8  8 8   8 8    8    8      8   8                        88    888888                     888888\n");
		printf("88888  88888  8  8 8  8    8    8       8 8                          88   888888                     888888\n");
		printf("8      8   8  8   8   8    8    8        8                            88   8888                      888888\n");
		printf("8      8   8  8       8  88888  88888    8                             888888888888               888888888888\n");
		printf("                                                                         88888888 88             88 88888888 88\n");
		printf(" 8888   888   8888   88888                                               88888888  88    888    88  88888888  88\n");
		printf("8      8   8  8   8  8                                                   88888888   88  88888  88    888888    88\n");
		printf("8      88888  8888   888                                                 88888888    88  888  88     888888     88\n");
		printf("8      8   8  8  8   8                                                   88888888     888888888     88888888\n");
		printf(" 8888  8   8  8   8  88888                                               888  888    8 8888888 8   8888888888\n");
		printf("                                                                         888  888    8 8888888 8  88888888888\n");
		printf(" 8888   888   8       8888  8   8  8       888   88888   888   8888      888  888    8 8888888 8  888888888888\n");
		printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8   8     888  888      88   88    888888888888\n");
		printf("8      88888  8      8      8   8  8      88888    8    8   8  8888      888  888      88   88       88  88\n");
		printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8  8      888  888      88   88       88  88\n");
		printf(" 8888  8   8  88888   8888   888   88888  8   8    8     888   8   8     888  888      88   88       88  88\n");
		printf("=====================================================================================================================\n");
		printf("\n");
		//TAMBAHIN STATUS DISINI
		printf("Status Suami: ");
		if(kondisiSuami==1)printf("%s\n",hsl3);
		else if(kondisiSuami==2)printf("%s\n",hsl2);
		else if(kondisiSuami==3)printf("%s\n",hsl1);
		else printf("Sehat tapi tidak tau carrier atau normal\n");
		
		printf("Status Istri: ");
		if(kondisiIstri==1)printf("%s\n",hsl3);
		else if(kondisiIstri==2)printf("%s\n",hsl2);
		else if(kondisiIstri==3)printf("%s\n",hsl1);
		else printf("Sehat tapi tidak tau carrier atau normal\n");
		printf("Penyakit yang Anda Pilih: %s\n",penyakit);
		printf("\n");
				
		char anak[255]="Persentase Pada Anak Anda Adalah:";
		if((kondisiIstri==1 && kondisiSuami==1)||(kondisiIstri==4&&kondisiSuami==4)){ //suami normal & istri normal
			if(kondisiIstri==4||kondisiSuami==4)printf("Jika Pasangan Berstatus Normal & Normal:\n");
			printf("a) Anak Anda Normal 100%\n");
			printf("\n");
		} 
		if((kondisiIstri==2 && kondisiSuami==1)||(kondisiIstri==1 && kondisiSuami==2)||kondisiIstri==4||kondisiSuami==4){
			//1 normal, 1 carrier
			if(kondisiIstri==4||kondisiSuami==4)printf("Jika Pasangan Berstatus Normal & %s:\n",hsl2);
			printf("a) Anak Anda Normal Kemungkinan 50%\n");
			printf("b) Anak Anda %s Kemungkinan 50%\n",hsl2);
			printf("\n");

		}
		if((kondisiIstri==1 && kondisiSuami==3)||(kondisiIstri==3 && kondisiSuami==1)||kondisiIstri==4||kondisiSuami==4){
			//1 normal, 1 albino
			if(kondisiIstri==4||kondisiSuami==4)printf("Jika Pasangan Berstatus Normal & %s:\n",hsl1);
			printf("a) Anak Anda %s 100%\n",hsl2);
			printf("\n");

		}
		if((kondisiIstri==2 && kondisiSuami==2)||kondisiIstri==4||kondisiSuami==4){ 
			//2 carrier
			if(kondisiIstri==4||kondisiSuami==4)printf("Jika Pasangan Berstatus %s & %s:\n",hsl2,hsl2);
			printf("a) Anak Anda Normal Kemungkinan 25%\n");
			printf("b) Anak Anda %s Kemungkinan 50%\n",hsl2);
			printf("c) Anak Anda %s Kemungkinan 25%\n",hsl1);		
			printf("\n");

		}
		if((kondisiIstri==2 && kondisiSuami==3)||(kondisiIstri==3 && kondisiSuami==2)||kondisiIstri==4||kondisiSuami==4){
			//1 carrier, 1 albino
			if(kondisiIstri==4||kondisiSuami==4)printf("Jika Pasangan Berstatus %s & %s:\n",hsl2,hsl1);
			printf("a) Anak Anda %s Kemungkinan 50%\n",hsl2);		
			printf("b) Anak Anda %s Kemungkinan 50%\n",hsl1);	
			printf("\n");

		}
		if((kondisiIstri==3 && kondisiSuami==3)||kondisiIstri==4||kondisiSuami==4){
			//2 albino
			if(kondisiIstri==4||kondisiSuami==4)printf("Jika Pasangan Berstatus %s & %s:\n",hsl1,hsl1);
			printf("a) Anak Anda %s 100%\n",hsl1);
			printf("\n");
		} 
		
		/**
		else if((kondisiIstri==4 && kondisiSuami==1)||(kondisiIstri==1 && kondisiSuami==4)){
			//1 ga tau, 1 normal
			printf("%s\n", anak);
			printf("a) Anak Anda Terbebas Dari Penyakit Kemungkinan 50%\n");
			printf("b) Anak Anda Carrier Kemungkinan 50%\n");	
		} else if((kondisiIstri==4 && kondisiSuami==2)||(kondisiIstri==2 && kondisiSuami==4)){
			//1 ga tau, 1 carrier
			printf("%s\n", anak); 
			printf("a) Anak Anda Terbebas Dari Penyakit Kemungkinan 25%\n");
			printf("b) Anak Anda Carrier Kemungkinan 50%\n");
			printf("c) Anak Anda Mengidap %s Kemungkinan 25%\n", nama);				
		} else if((kondisiIstri==4 && kondisiSuami==3)||(kondisiIstri==3 && kondisiSuami==4)){
			//1 ga tau, 1 mengidap
			printf("%s\n", anak);
			printf("a) Anak Anda Carrier Kemungkinan 50%\n");
			printf("b) Anak Anda Mengidap %s Kemungkinan 50%\n", nama);				
		} else if(kondisiIstri==4 && kondisiSuami==4){
			//1 ga tau, 1 gatau. hadehh aneh aneh emg.
			printf("%s\n", anak); 
			printf("a) Anak Anda Terbebas Dari Penyakit Kemungkinan 29.2%\n");
			printf("b) Anak Anda Carrier Kemungkinan 41.6%\n");
			printf("c) Anak Anda Mengidap %s Kemungkinan 29.2%\n", nama);				 	
		}
		**/

		printf("NOTE: Tidak Ada Kemungkinan Lain Selain Kondisi yang Sudah Dijabarkan.\n");
		printf("\n");
		printf("=====================================================================================================================\n");
		printf("Pilihlah Opsi Dibawah Ini:\n");
		printf("1.Saya masih ingin tetap menjalan halaman ini.\n");
		printf("2.Saya ingin keluar dari halaman ini.\n");
		printf("Silahkan Pilih Opsi Anda:\n");	
		scanf("%d",&check);
	}
}



void hemofilia_dkk_2(){
	/**
	Bagian ini untuk penyakit hemofilia, buta warna, dan anodontia.
	**/
	int check=1;
	while(check==1){
		//Mengecek gender terlebih dahulu
		int gender=0,kondisi=0;
		//printf("%d\n",gender);
		while(gender<1||gender>2){
			system("CLS");
			printf("88888   888    8     8   88888  8      8   8                       88      8888                       8888\n");
			printf("8      8   8  8 8   8 8    8    8      8   8                        88    888888                     888888\n");
			printf("88888  88888  8  8 8  8    8    8       8 8                          88   888888                     888888\n");
			printf("8      8   8  8   8   8    8    8        8                            88   8888                      888888\n");
			printf("8      8   8  8       8  88888  88888    8                             888888888888               888888888888\n");
			printf("                                                                         88888888 88             88 88888888 88\n");
			printf(" 8888   888   8888   88888                                               88888888  88    888    88  88888888  88\n");
			printf("8      8   8  8   8  8                                                   88888888   88  88888  88    888888    88\n");
			printf("8      88888  8888   888                                                 88888888    88  888  88     888888     88\n");
			printf("8      8   8  8  8   8                                                   88888888     888888888     88888888\n");
			printf(" 8888  8   8  8   8  88888                                               888  888    8 8888888 8   8888888888\n");
			printf("                                                                         888  888    8 8888888 8  88888888888\n");
			printf(" 8888   888   8       8888  8   8  8       888   88888   888   8888      888  888    8 8888888 8  888888888888\n");
			printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8   8     888  888      88   88    888888888888\n");
			printf("8      88888  8      8      8   8  8      88888    8    8   8  8888      888  888      88   88       88  88\n");
			printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8  8      888  888      88   88       88  88\n");
			printf(" 8888  8   8  88888   8888   888   88888  8   8    8     888   8   8     888  888      88   88       88  88\n");
			printf("=====================================================================================================================\n");
			printf("\n");
			printf("Pilihlah Jenis Kelamin Anda\n");
			printf("1.Laki-laki\n");
			printf("2.Perempuan\n");
			printf("\n");
			printf("=====================================================================================================================\n");
			printf("Silahkan Pilih Opsi Anda:\n");
			//Untuk menentukan gender
			scanf("%d",&gender);
		}
		
		//Mengecek kondisi kesehatan
		while(kondisi<1||kondisi>4){
			system("CLS");
			printf("88888   888    8     8   88888  8      8   8                       88      8888                       8888\n");
			printf("8      8   8  8 8   8 8    8    8      8   8                        88    888888                     888888\n");
			printf("88888  88888  8  8 8  8    8    8       8 8                          88   888888                     888888\n");
			printf("8      8   8  8   8   8    8    8        8                            88   8888                      888888\n");
			printf("8      8   8  8       8  88888  88888    8                             888888888888               888888888888\n");
			printf("                                                                         88888888 88             88 88888888 88\n");
			printf(" 8888   888   8888   88888                                               88888888  88    888    88  88888888  88\n");
			printf("8      8   8  8   8  8                                                   88888888   88  88888  88    888888    88\n");
			printf("8      88888  8888   888                                                 88888888    88  888  88     888888     88\n");
			printf("8      8   8  8  8   8                                                   88888888     888888888     88888888\n");
			printf(" 8888  8   8  8   8  88888                                               888  888    8 8888888 8   8888888888\n");
			printf("                                                                         888  888    8 8888888 8  88888888888\n");
			printf(" 8888   888   8       8888  8   8  8       888   88888   888   8888      888  888    8 8888888 8  888888888888\n");
			printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8   8     888  888      88   88    888888888888\n");
			printf("8      88888  8      8      8   8  8      88888    8    8   8  8888      888  888      88   88       88  88\n");
			printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8  8      888  888      88   88       88  88\n");
			printf(" 8888  8   8  88888   8888   888   88888  8   8    8     888   8   8     888  888      88   88       88  88\n");
			printf("=====================================================================================================================\n");
			printf("\n");
			printf("Pilihlah Status Kesehatan Genetik Anda:\n");
			printf("1.Normal\n");
			printf("2.Carrier\n");
			printf("3.%s\n",nama);
			printf("4.Sehat tapi tidak tau carrier atau normal\n");
			printf("\n");
			printf("Status Gender Anda: ");
			if(gender==1)printf("Laki-laki.\n");
			else printf("Perempuan.\n");	
			printf("\n");
			printf("=====================================================================================================================\n");			
			printf("Silahkan Pilih Opsi Anda:\n");
			scanf("%d",&kondisi);
		}
		
		//MENULISKAN HASIL
		system("CLS");
		printf("88888   888    8     8   88888  8      8   8                       88      8888                       8888\n");
		printf("8      8   8  8 8   8 8    8    8      8   8                        88    888888                     888888\n");
		printf("88888  88888  8  8 8  8    8    8       8 8                          88   888888                     888888\n");
		printf("8      8   8  8   8   8    8    8        8                            88   8888                      888888\n");
		printf("8      8   8  8       8  88888  88888    8                             888888888888               888888888888\n");
		printf("                                                                         88888888 88             88 88888888 88\n");
		printf(" 8888   888   8888   88888                                               88888888  88    888    88  88888888  88\n");
		printf("8      8   8  8   8  8                                                   88888888   88  88888  88    888888    88\n");
		printf("8      88888  8888   888                                                 88888888    88  888  88     888888     88\n");
		printf("8      8   8  8  8   8                                                   88888888     888888888     88888888\n");
		printf(" 8888  8   8  8   8  88888                                               888  888    8 8888888 8   8888888888\n");
		printf("                                                                         888  888    8 8888888 8  88888888888\n");
		printf(" 8888   888   8       8888  8   8  8       888   88888   888   8888      888  888    8 8888888 8  888888888888\n");
		printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8   8     888  888      88   88    888888888888\n");
		printf("8      88888  8      8      8   8  8      88888    8    8   8  8888      888  888      88   88       88  88\n");
		printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8  8      888  888      88   88       88  88\n");
		printf(" 8888  8   8  88888   8888   888   88888  8   8    8     888   8   8     888  888      88   88       88  88\n");
		printf("=====================================================================================================================\n");
		printf("\n");
		printf("Status Gender Anda: ");
		if(gender==1)printf("Laki-laki.\n");
		else printf("Perempuan.\n");
		printf("Status Kesehatan Genetik Anda:");
		if(kondisi==1)printf("Normal\n");
		else if(kondisi==2)printf("Carrier\n");
		else if(kondisi==3)printf("%s\n",nama);
		else printf("4.Sehat tapi tidak tau carrier atau normal\n");
		printf("Penyakit yang Anda Pilih: %s\n",penyakit);
		printf("\n");
		printf("Kemungkinan-kemungkinan yang Ada:\n");
		//PEMBAGIAN BERDASARKAN GENDER TERLEBIH DAHULU
		if(gender==1){
			if(kondisi==1||kondisi==4){
				printf("a)Ayah Anda Normal - Ibu Anda Normal\n");
				printf("b)Ayah Anda Normal - Ibu Anda Carrier\n");
				printf("b)Ayah Anda Mengidap - Ibu Anda Normal\n");
				printf("d)Ayah Anda Mengidap - Ibu Anda Carrier\n");
			}
			else if(kondisi==2){
				printf("Kondisi ini tidak mungkin dialami oleh Anda.\n");
				printf("Seorang laki-laki tidak mungkin berstatus Carrier.\n");
			}
			else if(kondisi==3){
				printf("a)Ayah Anda Normal - Ibu Anda Carrier\n");
				printf("b)Ayah Anda Normal - Ibu Anda Mengidap\n");
				printf("c)Ayah Anda Mengidap - Ibu Anda Carrier\n");
				printf("d)Ayah Anda Mengidap - Ibu Anda Mengidap\n");	
			}
		}
		else{
			if(kondisi==1||kondisi==4){
				if(kondisi==4)printf("Jika Anda Normal:\n");
				printf("a)Ayah Anda Normal - Ibu Anda Normal\n");
				printf("b)Ayah Anda Normal - Ibu Anda Carrier\n");
			}
			if(kondisi==2||kondisi==4){
				if(kondisi==4)printf("Jika Anda Carrier:\n");
				printf("a)Ayah Anda Normal - Ibu Anda Carrier\n");
				printf("b)Ayah Anda Normal - Ibu Anda Mengidap\n");
				printf("c)Ayah Anda Mengidap - Ibu Anda Normal\n");
				printf("d)Ayah Anda Mengidap - Ibu Anda Carrier\n");			
			}
			if(kondisi==3){
				printf("a)Ayah Anda Mengidap - Ibu Anda Carrier\n");
				printf("b)Ayah Anda Mengidap - Ibu Anda Mengidap\n");
			}
		}
		printf("NOTE: Tidak Ada Kemungkinan Lain Selain Kondisi yang Sudah Dijabarkan.\n");
		printf("\n");
		printf("=====================================================================================================================\n");
		printf("Pilihlah Opsi Dibawah Ini:\n");
		printf("1.Saya masih ingin tetap menjalankan halaman ini.\n");
		printf("2.Saya ingin keluar dari halaman ini.\n");
		printf("Silahkan Pilih Opsi Anda:\n");	
		scanf("%d",&check);
	}	
}

void hemofilia_dkk_1(){
	/**
	Bagian ini untuk penyakit hemofilia, buta warna, dan anodontia.
	**/
	int check=1;
	while(check==1){

		int kondisiIstri=0;
		int kondisiSuami=0;
		//Mengecek kondisi kesehatan
		while((kondisiSuami<1||kondisiSuami>2) || (kondisiIstri<1||kondisiIstri>4)){
			system("CLS");
			printf("88888   888    8     8   88888  8      8   8                       88      8888                       8888\n");
			printf("8      8   8  8 8   8 8    8    8      8   8                        88    888888                     888888\n");
			printf("88888  88888  8  8 8  8    8    8       8 8                          88   888888                     888888\n");
			printf("8      8   8  8   8   8    8    8        8                            88   8888                      888888\n");
			printf("8      8   8  8       8  88888  88888    8                             888888888888               888888888888\n");
			printf("                                                                         88888888 88             88 88888888 88\n");
			printf(" 8888   888   8888   88888                                               88888888  88    888    88  88888888  88\n");
			printf("8      8   8  8   8  8                                                   88888888   88  88888  88    888888    88\n");
			printf("8      88888  8888   888                                                 88888888    88  888  88     888888     88\n");
			printf("8      8   8  8  8   8                                                   88888888     888888888     88888888\n");
			printf(" 8888  8   8  8   8  88888                                               888  888    8 8888888 8   8888888888\n");
			printf("                                                                         888  888    8 8888888 8  88888888888\n");
			printf(" 8888   888   8       8888  8   8  8       888   88888   888   8888      888  888    8 8888888 8  888888888888\n");
			printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8   8     888  888      88   88    888888888888\n");
			printf("8      88888  8      8      8   8  8      88888    8    8   8  8888      888  888      88   88       88  88\n");
			printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8  8      888  888      88   88       88  88\n");
			printf(" 8888  8   8  88888   8888   888   88888  8   8    8     888   8   8     888  888      88   88       88  88\n");
			printf("=====================================================================================================================\n");
			printf("\n");
			printf("Pilihlah Status Kesehatan Suami:\n"); //laki-laki
			printf("1.Normal\n");
			printf("2.%s\n",nama);
			printf("\n");
			printf("Silahkan Pilih Opsi Anda:\n");
			scanf("%d",&kondisiSuami);
			printf("\n");
			printf("=====================================================================================================================\n");
			printf("\n");
			printf("Pilihlah Status Kesehatan Istri:\n"); //isthree
			printf("1.Normal\n");
			printf("2.Carrier\n");
			printf("3.%s\n",nama);
			printf("4.Sehat tapi tidak tau carrier atau normal\n");
			printf("\n");           
			printf("Silahkan Pilih Opsi Anda:\n");
			scanf("%d",&kondisiIstri);
		}
		
		
	
		char persentaseLaki[255]="Persentase Pada Anak Laki-Laki Anda Adalah:";
		char persentasePerempuan[255]="Persentase Pada Anak Perempuan Anda Adalah:";
		system("CLS");
		printf("88888   888    8     8   88888  8      8   8                       88      8888                       8888\n");
		printf("8      8   8  8 8   8 8    8    8      8   8                        88    888888                     888888\n");
		printf("88888  88888  8  8 8  8    8    8       8 8                          88   888888                     888888\n");
		printf("8      8   8  8   8   8    8    8        8                            88   8888                      888888\n");
		printf("8      8   8  8       8  88888  88888    8                             888888888888               888888888888\n");
		printf("                                                                         88888888 88             88 88888888 88\n");
		printf(" 8888   888   8888   88888                                               88888888  88    888    88  88888888  88\n");
		printf("8      8   8  8   8  8                                                   88888888   88  88888  88    888888    88\n");
		printf("8      88888  8888   888                                                 88888888    88  888  88     888888     88\n");
		printf("8      8   8  8  8   8                                                   88888888     888888888     88888888\n");
		printf(" 8888  8   8  8   8  88888                                               888  888    8 8888888 8   8888888888\n");
		printf("                                                                         888  888    8 8888888 8  88888888888\n");
		printf(" 8888   888   8       8888  8   8  8       888   88888   888   8888      888  888    8 8888888 8  888888888888\n");
		printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8   8     888  888      88   88    888888888888\n");
		printf("8      88888  8      8      8   8  8      88888    8    8   8  8888      888  888      88   88       88  88\n");
		printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8  8      888  888      88   88       88  88\n");
		printf(" 8888  8   8  88888   8888   888   88888  8   8    8     888   8   8     888  888      88   88       88  88\n");
		printf("=====================================================================================================================\n");
		printf("\n");
		//Unuk menulis status di halaman
		printf("Status Kesehatan Suami: ");
		if(kondisiSuami==1)printf("Normal\n");
		else printf("%s\n",nama);
		printf("Status Kesehatan Istri: ");
		if(kondisiIstri==1)printf("Normal\n");
		else if(kondisiIstri==2)printf("Carrier\n");
		else if(kondisiIstri==3)printf("%s\n",nama);
		else printf("Sehat tapi tidak tau carrier atau normal\n");
		printf("Penyakit yang Anda Pilih: %s\n",penyakit);
		printf("\n");
		
		if((kondisiIstri==1 && kondisiSuami==1)||(kondisiIstri==4 && kondisiSuami==1)){ //suami normal & istri normal
			if(kondisiIstri==4)printf("Jika Istri Normal\n");
			printf("Persentase Pada Anak Anda Adalah:\n");
			printf("a) Anak Anda Normal 100%\n");
			printf("\n");
		}
		if((kondisiIstri==1 && kondisiSuami==2)||(kondisiIstri==4 && kondisiSuami==2)){ //istri normal & suami idap
			if(kondisiIstri==4)printf("Jika Istri Normal\n");
			printf("%s\n", persentaseLaki);
			printf("a) Anak Anda Normal 100%\n");
			printf("%s\n", persentasePerempuan);
			printf("a) Anak Anda Carrier 100%\n");
			printf("\n");

		}
		if((kondisiIstri==2 && kondisiSuami==1)||(kondisiIstri==4 && kondisiSuami==1)){ //istri carrier & suami normal
			if(kondisiIstri==4)printf("Jika Istri Carrier\n");
			printf("%s\n", persentaseLaki);
			printf("a) Anak Normal kemungkinan 50%\n");
			printf("b) Anak Anda Mengidap Penyakit kemungkinan 50%\n");
			printf("%s\n", persentasePerempuan);
			printf("a) Anak Anda Normal kemungkinan 50%\n");
			printf("b) Anak Anda Carrier 50%\n");
			printf("\n");

		}
		if(kondisiIstri==3 && kondisiSuami==1){ //suami normal & istri idap
			printf("%s\n", persentaseLaki);
			printf("a) Anak Anda Mengidap Penyakit 100%\n");
			printf("%s\n", persentasePerempuan);
			printf("a) Anak Anda Carrier 100%\n");
			printf("\n");
			
		}
		if((kondisiIstri==2 && kondisiSuami==2)||(kondisiIstri==4 && kondisiSuami==2)){ //suami idap & istri carrier
			if(kondisiIstri==4)printf("Jika Istri Carrier\n");
			printf("%s\n", persentaseLaki);
			printf("a) Anak Anda Normal kemungkinan 50%\n");
			printf("b) Anak Anda Mengidap Penyakit kemungkinan 50%\n");
			printf("%s\n", persentasePerempuan);
			printf("a) Anak Anda Mengidap Penyakit kemungkinan 50%\n");
			printf("b) Anak Anda Carrier kemungkinan 50%\n");
			printf("\n");

			
		}
		if(kondisiIstri==3 && kondisiSuami==2){ //suami idap & istri idap
			printf("%s\n", persentaseLaki);
			printf("a) Anak Anda Mengidap Penyakit kemungkinan 100%\n");
			printf("%s\n", persentasePerempuan);
			printf("a) Anak Anda Mengidap Penyakit kemungkinan 100%\n");
			printf("\n");

		}
		/**
		if(kondisiSuami==1 && kondisiIstri==4){ //laki normal , istri ga tau 
			printf("%s\n", persentaseLaki);
			printf("a) Anak Anda Terbebas Penyakit Kemungkinan 50%\n");
			printf("b) Anak Anda Mengidap Penyakit Kemungkinan 50%\n");
			printf("\n");
			printf("%s\n", persentasePerempuan);
			printf("a) Anak Anda Terbebas Penyakit Kemungkinan 50%\n");
			printf("b) Anak Anda Carrier Kemungkinan 50%\n");
		}
		if(kondisiSuami==2 && kondisiIstri==4){ // laki ngidap, istri ga tau 
			printf("%s\n", persentaseLaki);
			printf("a) Anak Anda Terbebas Penyakit Kemungkinan 50%\n");
			printf("b) Anak Anda Mengidap Penyakit Kemungkinan 50%\n");
			printf("\n");
			printf("%s\n", persentasePerempuan);
			printf("a) Anak Anda Carrier Kemungkinan 50%\n");
			printf("b) Anak Anda Mengidap Penyakit Kemungkinan 50%\n");
		}
		if(kondisiSuami==3 && kondisiIstri==1){ // laki ga tau, istri normal
			printf("%s\n", persentaseLaki);
			printf("a) Anak Anda Terbebas Penyakit Kemungkinan 100%\n");

			printf("\n");
			printf("%s\n", persentasePerempuan);
			printf("a) Anak Anda Terbebas Penyakit Kemungkinan 100%\n");
			printf("b) Anak Anda Carrier Kemungkinan 100%\n");
		}
		if(kondisiSuami==3 && kondisiIstri==2){ // laki ga tau, istri carrier
			printf("%s\n", persentaseLaki);
			printf("a) Anak Anda Terbebas Penyakit Kemungkinan 50%\n");
			printf("b) Anak Anda Mengidap Penyakit Kemungkinan 50%\n");
			printf("\n");
			printf("%s\n", persentasePerempuan);
			printf("a) Anak Anda Terbebas Penyakit Kemungkinan 25%\n");
			printf("b) Anak Anda Carrier Kemungkinan 50%\n");
			printf("c) Anak Anda Mengidap Penyakit Kemungkinan 25%\n");
		}
		if(kondisiSuami==3 && kondisiIstri==3){ // laki ga tau, istri kena
			printf("%s\n", persentaseLaki);
			printf("a) Anak Anda Mengidap Penyakit Kemungkinan 100%\n");
			printf("\n");
			printf("%s\n", persentasePerempuan);
			printf("a) Anak Anda Carrier Kemungkinan 50%\n");
			printf("b) Anak Anda Mengidap Penyakit Kemungkinan 50%\n");
		}	
		printf("\n");
		**/
		
		printf("NOTE: Tidak Ada Kemungkinan Lain Selain Kondisi yang Sudah Dijabarkan.\n");
		printf("\n");
		printf("=====================================================================================================================\n");
		printf("Pilihlah Opsi Dibawah Ini:\n");
		printf("1.Saya masih ingin tetap menjalankan halaman ini.\n");
		printf("2.Saya ingin keluar dari halaman ini.\n");
		printf("Silahkan Pilih Opsi Anda:\n");	
		scanf("%d",&check);
	}	
}



void penentuan(int pos){
	/**
	1)Untuk menentukan apakah dia mau mencari tau penyakit pada keturunan dia
	atau 2)Untuk mencari tau kemungkinan penyakit yang diidap oleh ortu dia
	dengan kondisi kesehatan dia yang sekarang.
	**/
	int input=-1;
	while(input!=3){
		input=-1;
		while(input<1||input>3){
			system("CLS");
			printf("88888   888    8     8   88888  8      8   8                       88      8888                       8888\n");
			printf("8      8   8  8 8   8 8    8    8      8   8                        88    888888                     888888\n");
			printf("88888  88888  8  8 8  8    8    8       8 8                          88   888888                     888888\n");
			printf("8      8   8  8   8   8    8    8        8                            88   8888                      888888\n");
			printf("8      8   8  8       8  88888  88888    8                             888888888888               888888888888\n");
			printf("                                                                         88888888 88             88 88888888 88\n");
			printf(" 8888   888   8888   88888                                               88888888  88    888    88  88888888  88\n");
			printf("8      8   8  8   8  8                                                   88888888   88  88888  88    888888    88\n");
			printf("8      88888  8888   888                                                 88888888    88  888  88     888888     88\n");
			printf("8      8   8  8  8   8                                                   88888888     888888888     88888888\n");
			printf(" 8888  8   8  8   8  88888                                               888  888    8 8888888 8   8888888888\n");
			printf("                                                                         888  888    8 8888888 8  88888888888\n");
			printf(" 8888   888   8       8888  8   8  8       888   88888   888   8888      888  888    8 8888888 8  888888888888\n");
			printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8   8     888  888      88   88    888888888888\n");
			printf("8      88888  8      8      8   8  8      88888    8    8   8  8888      888  888      88   88       88  88\n");
			printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8  8      888  888      88   88       88  88\n");
			printf(" 8888  8   8  88888   8888   888   88888  8   8    8     888   8   8     888  888      88   88       88  88\n");
			printf("=====================================================================================================================\n");
			printf("\n");
			printf("Apa yang ingin Anda telusuri?\n");
			printf("1.Menentukan kemungkinan penyakit pada keturunan.\n");
			printf("2.Menentukan kemungkinan penyakit pada orangtua.\n");
			printf("3.Back(kembali ke halaman sebelumnya untuk menentukan penyakit)\n");
			printf("\n");
			printf("=====================================================================================================================\n");
			printf("Penyakit:%s\n",nama);
			printf("Silahkan Pilih Opsi Anda:\n");
			//VARIABEL UNTUK MENENTUKAN KEMANA PROGRA BERJALAN
			scanf("%d",&input);
		}
		
		
		if(input==2){
			if(pos==1){
				hemofilia_dkk_2();
			}
			else if(pos==2){
				albino_dkk_2();			
			}
		}
		
		if(input==1){
			if(pos==1){
				hemofilia_dkk_1();
			}
			else if(pos==2){
				albino_dkk_1();			
			}
		}
		
	}
	
}


void start(){
	/**
	-Tampilan awal halaman pertama start
	**/
	int input=-1;
	while(input!=6){
		input=-1;
		int pos;
		
		while(input<1||input>6){
			system("CLS");
			printf("88888   888    8     8   88888  8      8   8                       88      8888                       8888\n");
			printf("8      8   8  8 8   8 8    8    8      8   8                        88    888888                     888888\n");
			printf("88888  88888  8  8 8  8    8    8       8 8                          88   888888                     888888\n");
			printf("8      8   8  8   8   8    8    8        8                            88   8888                      888888\n");
			printf("8      8   8  8       8  88888  88888    8                             888888888888               888888888888\n");
			printf("                                                                         88888888 88             88 88888888 88\n");
			printf(" 8888   888   8888   88888                                               88888888  88    888    88  88888888  88\n");
			printf("8      8   8  8   8  8                                                   88888888   88  88888  88    888888    88\n");
			printf("8      88888  8888   888                                                 88888888    88  888  88     888888     88\n");
			printf("8      8   8  8  8   8                                                   88888888     888888888     88888888\n");
			printf(" 8888  8   8  8   8  88888                                               888  888    8 8888888 8   8888888888\n");
			printf("                                                                         888  888    8 8888888 8  88888888888\n");
			printf(" 8888   888   8       8888  8   8  8       888   88888   888   8888      888  888    8 8888888 8  888888888888\n");
			printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8   8     888  888      88   88    888888888888\n");
			printf("8      88888  8      8      8   8  8      88888    8    8   8  8888      888  888      88   88       88  88\n");
			printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8  8      888  888      88   88       88  88\n");
			printf(" 8888  8   8  88888   8888   888   88888  8   8    8     888   8   8     888  888      88   88       88  88\n");
			printf("=====================================================================================================================\n");
			printf("\n");
			printf("Penyakit apa yang ingin Anda telusuri?\n");
			printf("1.Hemofilia\n");
			printf("2.Anodontia\n");
			printf("3.Buta warna\n");
			printf("4.Thalassemia\n");
			printf("5.Albino\n");
			printf("6.Back(kembali ke halaman sebelumnya)\n");
			printf("\n");
			printf("=====================================================================================================================\n");
			printf("Silahkan Pilih Opsi Anda:\n");
			//VARIABEL UNTUK MENENTUKAN PENYAKIT
			scanf("%d",&input);
		}
		
		/**
		Penamaan string dimulai dari sini supaya nanti kita gaperlu bikin void2 yang beda
		tapi cukup 1 void yang sama.Sehingga kita cukup tulis misalnya
		printf("Kemungkinan menderita %s",nama);
		**/
		
		if(input==1)strcpy(penyakit,"Hemofilia");
		else if(input==2)strcpy(penyakit,"Anodontia");
		else if(input==3)strcpy(penyakit,"Buta Warna");
		else if(input==4)strcpy(penyakit,"Thalassemia");
		else if(input==5)strcpy(penyakit,"Albino");
		
		
		if(input==4){
			strcpy(hsl1,"Thalassemia Mayor");
			strcpy(hsl2,"Thalassemia Minor");
			strcpy(hsl3,"Normal");
		}
		else if(input==5){
			strcpy(hsl1,"Albino");
			strcpy(hsl2,"Carrier");
			strcpy(hsl3,"Normal");
		}
		
		help=input;
		if(input>=1&&input<=3){
			if(input==1)strcpy(nama,"Hemofilia");   
			else if(input==2)strcpy(nama,"Anodontia");
			else strcpy(nama,"Buta warna"); 
			pos=1;
			penentuan(pos);//setelah mendapatkan nama, maka langsung dioper ke bagian penentuan.
		}
		else if(input!=6){
			if(input==4){
				strcpy(nama,"Thalassemia");
				strcpy(hsl1,"Thalassemia Mayor");
				strcpy(hsl2,"Thalassemia Minor");
			}
			else{
				strcpy(nama,"Albino");
				strcpy(hsl1,"Albino");
				strcpy(hsl2,"Carrier");
			}
			pos=2;
			strcpy(hsl3,"Normal");
			penentuan(pos);
		}
		
	}	
}


void about_this_app(){	
	/**
	Bagian ini berfungsi untuk mengenalkan fungsi, tujuan,serta cara kerja aplikasi ini kepada user.
	**/
	system("CLS");
	printf("88888   888    8     8   88888  8      8   8                       88      8888                       8888\n");
	printf("8      8   8  8 8   8 8    8    8      8   8                        88    888888                     888888\n");
	printf("88888  88888  8  8 8  8    8    8       8 8                          88   888888                     888888\n");
	printf("8      8   8  8   8   8    8    8        8                            88   8888                      888888\n");
	printf("8      8   8  8       8  88888  88888    8                             888888888888               888888888888\n");
	printf("                                                                         88888888 88             88 88888888 88\n");
	printf(" 8888   888   8888   88888                                               88888888  88    888    88  88888888  88\n");
	printf("8      8   8  8   8  8                                                   88888888   88  88888  88    888888    88\n");
	printf("8      88888  8888   888                                                 88888888    88  888  88     888888     88\n");
	printf("8      8   8  8  8   8                                                   88888888     888888888     88888888\n");
	printf(" 8888  8   8  8   8  88888                                               888  888    8 8888888 8   8888888888\n");
	printf("                                                                         888  888    8 8888888 8  88888888888\n");
	printf(" 8888   888   8       8888  8   8  8       888   88888   888   8888      888  888    8 8888888 8  888888888888\n");
	printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8   8     888  888      88   88    888888888888\n");
	printf("8      88888  8      8      8   8  8      88888    8    8   8  8888      888  888      88   88       88  88\n");
	printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8  8      888  888      88   88       88  88\n");
	printf(" 8888  8   8  88888   8888   888   88888  8   8    8     888   8   8     888  888      88   88       88  88\n");
	printf("=====================================================================================================================\n");
	printf("\n");
	
	printf("1. TUJUAN DAN FUNGSI\n");
    printf("\n");
    printf("	Family code calculator merupakan website yang berasal dari indonesia yang melayani dibidang Kesehatan.\n");
	printf("Aplikasi ini  diciptakan untuk mempermudah tenaga  medis dalam mengkalkulasi probabilitas penyakit/kelainan\n");
	printf("genetik keturunan dari hasil perkawinan.\n");
    //printf("\n");
    printf("	Aplikasi ini juga membantu masyarakat diluar agar bisa mengetahui probabilitas keturunan dan kemungkinan\n");
	printf("pada orang tua  mereka akan terkena penyakit keturunan tersebut tanpa harus mengetahui ilmu genetika secara\n");
	printf("detail dan  Membantu untuk menghindari  ataupun mengantisipasi penyakit keturunan terhadap keturunan mereka.\n");
    printf("\n");
    
    /**
    printf("2.MACAM-MACAM PENYAKIT\n");
	printf("\n");
	printf("Kelainan genetik yang dapat kita kalkulasi ada 5 macam yaitu Hemofilia, Anodontia, Buta warna, Thalasemia dan Albino:\n");
	printf("\n");
	printf("A.Hemofilia\n");
	//printf("\n");
	printf("	Hemofilia adalah gangguan pembekuan darah akibat kekurangan faktor VII dan IX. Saat mengalami hemofilia\n");
	printf(",perdarahan akan berlangsung lebih lama. Kondisi ini merupakan penyakit keturunan yang lebih sering terjadi pada\n");
	printf("pria.\n");
	//printf("\n");
	printf("	Hemofilia disebabkan oleh mutasi genetik. Mutasi genetik yang terjadi pada hemofilia menyebabkan darah\n");
	printf("kekurangan protein pembentuk faktor pembekuan. Kekurangan faktor pembekuan ini akan menyebabkan darah sukar\n");
	printf("membeku\n");
	//printf("\n");
	printf("	Hemofilia belum dapat disembuhkan. Namun, penderita hemofilia dapat hidup secara normal dengan mencegah\n");
	printf("terjadinya luka dan melakukan kontrol rutin ke dokter.\n");
	//printf("\n");
	printf("	Gejala utama hemofilia adalah darah sukar membeku sehingga menyebabkan perdarahan sulit berhenti atau\n");
	printf(" berlangsung lebih lama.\n");
	printf("\n");
	printf("\n");
	printf("B. Anondantia\n");
	//printf("\n");
	printf("	Anodontia merupakan suatu keadaan dimana benih gigi tidak terbentuk sama sekali. Meskipun semua gigi sulung\n");
	printf("terbentuk dalam jumlah yang tepat, anodontia dapat terjadi pada periode gigi tetap/ permanen. Namun sebenarnya\n");
	printf("kondisi ini sangat jarang terjadi.\n");
	//printf("\n");
	printf("	Biasanya anodontia melibatkan baik gigi susu maupun gigi tetap. Namun sebagian besar kasus ditemukan anodontia\n");
	printf("yang terjadi pada gigi tetap. Kondisi ini sering dikaitkan dengan sindrom pada saraf, yaitu ektodermal displasia dan\n");
	printf("kelainan pada kulit.\n");
	//printf("\n");
	printf("	Gangguan ini dapat menyebabkan terjadinya komplikasi berupa kesulitan dalam aktivitas yang melibatkan fungsi gigi.\n");
	printf("Misalnya seperti pengunyahan, bicara, dan juga gangguan estetis.\n");
	//printf("\n");
	printf("Gejala anodontia atau benih gigi tidak ada ditandai dengan tidak terbentuknya semua gigi. Biasanya gejala ini lebih sering\n");
	printf("mengenai gigi tetap dibandingkan gigi sulung.\n");
	printf("\n");
	printf("\n");
	printf("C. Buta Warna\n");
	printf("	Buta warna adalah kondisi di mana kualitas penglihatan terhadap warna berkurang. Seseorang yang menderita penyakit\n");
	printf("ini akan sulit membedakan warna tertentu (buta warna sebagian) atau bahkan seluruh warna (buta warna total). Buta warna\n");
	printf("merupakan penyakit seumur hidup. Namun, penderita dapat melatih diri beradaptasi dengan kondisi ini, sehingga aktivitas\n");
	//printf("sehari-hari tetap berjalan normal. Dokter akan menentukan metode penanganan yang tepat dan sesuai dengan tipe buta warna\n");
	printf("sehari-hari tetap berjalan normal. Dokter akan menentukan metode penanganan yang tepat dan sesuai dengan tipe buta warna\n");
	printf("\n");
	printf("yang diderita.\n");
	//printf("\n");
	printf("	Pada dasarnya mata memiliki sel-sel saraf khusus mengandung pigmen yang bereaksi terhadap warna dan cahaya. Sel ini\n");
	printf(" memiliki tiga pigmen yang berfungsi mendeteksi warna merah, hijau, dan biru.\n");
	//printf("\n");
	printf("	Pada seseorang yang menderita buta warna, sel pigmen tersebut mengalami kerusakan atau tidak berfungsi, sehingga mata\n");
	printf("tidak dapat mendeteksi warna-warna tertentu atau bahkan seluruh warna.\n");
	//printf("\n");
	printf("	Kerusakan sel tersebut terjadi karena adanya kelainan gen yang diturunkan dari orang tua ke anak.\n");
	printf("\n");
	printf("\n");
	printf("D. Thalasemia\n");
	printf("\n");
	printf("	Thalasemia adalah kelainan darah yang diturunkan dari orang tua. Kelainan ini membuat penderitanya mengalami anemia\n");
	printf("atau kurang darah.\n");
	//printf("\n");
	printf("	Kurang darah yang dialami penderita thalasemia akan menimbulkan keluhan cepat lelah, mudah mengantuk, hingga sesak napas.\n");
	printf("Akibatnya, aktivitas penderita thalasemia akan terganggu.\n");
	printf("\n");
	printf("	Thalasemia perlu diwaspadai, terutama thalasemia yang berat (mayor), karena dapat menyebabkan komplikasi berupa gagal\n");
	printf("jantung, pertumbuhan terhambat, gangguan hati, hingga kematian.\n");
	//printf("\n");
	printf("	Penderita thalasemia akan mengalami anemia yang membuat penderitanya merasa mudah lelah dan lemas. Gejala ini biasanya\n");
	printf("muncul pada saat 2 tahun pertama kehidupan. Akan tetapi, bagi penderita thalasemia yang ringan (minor), anemia bisa tidak\n");
	printf("terjadi.\n");
	//printf("\n");
	printf("Waktu munculnya gejala serta keparahan gejala yang dialami akan berbeda setiap penderita, sesuai dengan jenis thalasemia\n");
	printf("yang dialami. Pada thalasemia mayor, penderitanya akan merasakan gejala-gejala kurang darah yang parah. Kondisi ini dapat\n");
	printf("merusak organ tubuh, bahkan berujung pada kematian.\n");
	printf("\n");
	printf("\n");
	printf("E. Albino\n");
	printf("\n");
	printf("Albinisme atau albino adalah kondisi yang disebabkan oleh kekurangan atau ketiadaan melanin di dalam tubuh. Penderita albinisme bisa dikenali dari warna rambut dan kulitnya yang terlihat putih atau pucat.\n");
	printf("\n");
	printf("Melanin adalah pigmen yang dihasilkan tubuh untuk menentukan warna kulit, rambut, dan iris (selaput pelangi) mata. Melanin juga berperan dalam perkembangan saraf optik yang memengaruhi fungsi penglihatan. Kekurangan melanin dapat menyebabkan kelainan warna rambut, kulit, dan iris mata, serta mengganggu penglihatan.\n");
	printf("\n");
	printf("Albinisme atau albino disebabkan oleh perubahan atau mutasi pada gen yang berpengaruh dalam produksi melanin. Melanin adalah pigmen yang dihasilkan oleh sel melanosit yang terdapat di mata, kulit, dan rambut.\n");
	printf("\n");
	printf("Mutasi pada gen-gen tersebut menyebabkan produksi melanin berkurang drastis atau bahkan tidak diproduksi sama sekali. Hal inilah yang menyebabkan munculnya gejala albinisme.");
	printf("\n");
	printf("\n");
	**/
	//printf("3. CONTOH PROSES\n");
	printf("2.BAGAIMANA CARA MENGGUNAKAN APLIKASI INI?\n");
	printf("	Di dalam aplikasi ini terdapat 2 fitur yaitu fitur untuk mengetahui kemungkinan status genetika pada keturunan\n");
	printf("dan fitur untuk mengetahui status genetika pada orang tua. Cara mengetahuinnya adalah dengan menjawab pilihan-pilihan\n");
	printf("yang ada tentang status genetika Anda atau Anda dan pasangan Anda.\n");
	
    printf("\n");
    printf("3.CONTOH PROSES DARI ORANGTUA UNTUK MENGETAHUI KEMUNGKINAN STATUS GENETIKA ANAK\n");
    printf("Kondisi: Ayah Buta warna + Ibu normal\n");
    printf("-Anak perempuan:\n");
    printf("a)0% Kemungkinan memiliki anak perempuan normal\n");
    printf("b)100% Kemungkinan memiliki anak perempuan carrier\n");
    printf("c)0% Kemungkinan memiliki anak perempuan mengidap\n");
    printf("-Anak laki-laki:\n");
    printf("a)0% Kemungkinan memiliki anak laki laki mengidap\n");
    printf("b)100% Kemungkinan memiliki anak laki laki normal\n");
    printf("\n");
    printf("4.CONTOH PROSES DARI ANAK UNTUK MENGETAHUI KEMUNGKINAN STATUS GENETIKA ORANGTUA\n");
    printf("Kondisi: Anak laki-laki buta warna\n");
    printf("Kemungkinan-kemungkinan yang Ada:\n");
    printf("a)Ayah Anda Normal - Ibu Anda Carrier\n");
    printf("b)Ayah Anda Normal - Ibu Anda Mengidap\n");
    printf("c)Ayah Anda Mengidap - Ibu Anda Carrier\n");
    printf("d)Ayah Anda Mengidap - Ibu Anda Mengidap\n");
    printf("\n");
    printf("=====================================================================================================================\n");

    
    
    int input;
    printf("Tekan tombol enter jika sudah selesai membaca.\n");
    getchar();
    scanf("%[^\n]",input);
}

void daftar_penyakit(){
	
	/**
		Untuk memberitahu penyakit-penyakit yang bisa dihitung di aplikasi ini
	**/
	
	//HEMOFILIA
	system("CLS");
	printf("88888   888    8     8   88888  8      8   8                       88      8888                       8888\n");
	printf("8      8   8  8 8   8 8    8    8      8   8                        88    888888                     888888\n");
	printf("88888  88888  8  8 8  8    8    8       8 8                          88   888888                     888888\n");
	printf("8      8   8  8   8   8    8    8        8                            88   8888                      888888\n");
	printf("8      8   8  8       8  88888  88888    8                             888888888888               888888888888\n");
	printf("                                                                         88888888 88             88 88888888 88\n");
	printf(" 8888   888   8888   88888                                               88888888  88    888    88  88888888  88\n");
	printf("8      8   8  8   8  8                                                   88888888   88  88888  88    888888    88\n");
	printf("8      88888  8888   888                                                 88888888    88  888  88     888888     88\n");
	printf("8      8   8  8  8   8                                                   88888888     888888888     88888888\n");
	printf(" 8888  8   8  8   8  88888                                               888  888    8 8888888 8   8888888888\n");
	printf("                                                                         888  888    8 8888888 8  88888888888\n");
	printf(" 8888   888   8       8888  8   8  8       888   88888   888   8888      888  888    8 8888888 8  888888888888\n");
	printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8   8     888  888      88   88    888888888888\n");
	printf("8      88888  8      8      8   8  8      88888    8    8   8  8888      888  888      88   88       88  88\n");
	printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8  8      888  888      88   88       88  88\n");
	printf(" 8888  8   8  88888   8888   888   88888  8   8    8     888   8   8     888  888      88   88       88  88\n");
	printf("=====================================================================================================================\n");
	printf("\n");
	printf("Berikut adalah nama-nama penyakit genetik yang masuk dalam daftar di aplikasi ini:\n");
	printf("\n");
	printf("1.HEMOFILIA\n");
    printf("	Hemofilia adalah gangguan pada sistem pembekuan. Gangguan ini juga \n");
    printf("dikarenakan hemofilia membuat tubuh kekurangan protein yang dibutuhkan untuk \n");
    printf("proses pembekuan darah. Jadi jika seorang pengidap hemofilia mengalami pendarahan, \n");
    printf("pendarahan tersebut akan berlangsung lebih lama dari biasa.\n");
    printf("	Hemofilia merupakan penyakit keturunan yang cukup langka. Hemofilia \n");
    printf("disebabkan masalah pada mutasi genetik yang membuat tubuh tidak memiliki cukup \n");
    printf("komponen untuk pembekuan darah. Gejala penginap penyakit ini antara lain adalah \n");
    printf("pendarahan yang sulit berhenti, mudah memar, dan kesemutan pada daerah siku, lutut, \n");
    printf("dan pergelangan kaki.\n");
    printf("	Berdasarkan penyakit ini, seseorang dapat dikelompokan menjadi 3 golongan yaitu:\n");
    printf("	- Normal\n");
    printf("Pendarahan lebih cepat membeku daripada pengidap hemofilia\n");
    printf("	- Mengidap\n");
    printf("	1. Hemofilia Berat dapat mengalami beberapa kali perdarahan dalam sebulan. \n");
    printf("	Kadang - kadang perdarahan terjadi begitu saja tanpa sebab yang jelas.\n");
    printf("	2. Hemofilia Sedang perdarahan dapat terjadi akibat aktivitas tubuh yang terlalu \n");
    printf("	berat, seperti olah raga yang berlebihan.\n");
    printf("	3. Hemofilia Ringan mengalami masalah perdarahan hanya dalam situasi tertentu, \n");
    printf("	seperti operasi, cabut gigi atau mangalami luka yang serius.\n");
    printf("	- Carrier\n");
    printf("	Dalam kondisi carrier, kondisi kesehatan anak tersebut sehat seperti anak \n");
    printf("normal. Namun, dia bisa menurunkan hemofilia ke keturunannya. Kondisi ini hanya \n");
    printf("terjadi pada perempuan saja. \n");
    printf("	Apabila seorang ayah yang menderita hemofilia menurunkan kromosom Y ke \n");
    printf("bayinya, anak tersebut akan terlahir dengan jenis kelamin laki-laki. Bayi laki-laki \n");
    printf("tersebut akan mendapat kromosom X dari ibu yang merupakan carrier. Hampir \n");
    printf("semua kasus hemofilia diderita oleh anak laki-laki. Hal ini terjadi \n");
    printf("karena hemofilia merupakan penyakit yang melekat pada kromosom X dan \n");
    printf("diturunkan secara genetik.\n\n");

    //ANODONTIA
    printf("2.ANODONTIA\n");
    printf("	Anodontia adalah keadaan dimana semua benih gigi tidak terbentuk sama \n");
    printf("sekali biasanya pada periode gigi permanen (setelah gigi sulung/susu). Jika hanya \n");
    printf("sebagian saja yang tidak terbentuk maka keadaan tersebut disebut hypodontia (1-5 \n");
    printf("gigi permanen tidak tumbuh) atau oligodontia (>6 gigi permanen tidak tumbuh). \n");
    printf("Penyakit ini disebabkan oleh cacatnya genetik turunan dengan gen yang diduga \n");
    printf("berhubungan dengan penyakit ini adalah EDA, EDAR, dan EDARADD.\n");
    printf("Penyakit ini tidak dapat disembuhkan tetapi dapat diatasi dengan memasang gigi \n");
    printf("tiruan. Anak yang mengalami anodontia biasanya mengalami kesulitan berbicara \n");
    printf("dan makan.\n");
    printf("	Berdasarkan penyakit ini, seseorang dapat dikelompokan menjadi 3 golongan yaitu:\n");
    printf("	- Normal\n");
    printf("	Gigi sulung dan gigi permanen tumbuh semua\n");
    printf("	- Mengidap\n");
    printf("	Gigi sulung atau gigi permanen tidak tumbuh sama sekali atau sebagian\n");
    printf("	- Carrier\n");
    printf("	Keturunan laki – laki yang mewarisi sifat anodontia akan langsung mengalami \n");
    printf("	kelainan ini. Sedangkan perempuan tidak langsung mengalami kelainan ini. \n");
    printf("	Perempuan yang mewarisi sifat anodontia atau amolar dapat menjeadi penderita atau \n");
    printf("	pembawa sifat.  Jika menjadi pembawa sifat, secara kesehatan akan sehat seperti \n");
    printf("	anak normal, namun mereka bisa menularkan ke keturunannya.\n\n");

    // BUTA WARNA
    printf("3.BUTA WARNA\n");
    printf("	Buta warna adalah kelainan pada mata yang membuat mata tidak mampu \n");
    printf("membedakan warna dengan jelas. Pada orang normal, mata miliki sel saraf khusus \n");
    printf("yang mengandung pigmen yang bereaksi dan mendeteksi warna merah, hijau, dan \n");
    printf("biru. Pada seorang yang mengalami buta warna, saraf tersebut mengalami kerusakan \n");
    printf("sehingga tidak dapat membedakan warna tersebut. Terdapat 2 jenis buta warna yaitu \n");
    printf("buta warna sebagian dan buta warna total. Warna yang dilihat pengidap buta warna \n");
    printf("berbeda dengan yang dilihat orang normal. \n");
    
    printf("	Berdasarkan penyakit ini, seseorang dapat dikelompokan menjadi 3 golongan yaitu:\n");
    printf("	- Normal\n");
    printf("	Dapat melihat warna secara normal\n");
    printf("	- Mengidap\n");
    printf("	Warna yang dilihat berbeda dari orang biasanya\n");
    printf("	- Carrier\n");
    printf("	Seseorang yang menjadi carrier akan secara fisik sehat seperti orang normal, namun \n");
    printf("	ia berpotensi menularkan penyakit tersebut pada keturunannya.\n");
	printf("	Buta warna bawaan disebabkan adanya mutasi dalam kromosom X yang diturunkan \n");
    printf("	ayah atau ibu. Kasus buta warna lebih banyak terjadi pada laki-laki karena laki-laki \n");
    printf("	yang terbentuk dari kromosom XY hanya mempunyai satu kromosom X. Dengan \n");
    printf("	demikian, jika kromosom X-nya terganggu atau rusak, maka dia berpotensi lebih \n");
    printf("	besar mengalami buta warna. Sementara itu, perempuan yang terbentuk dari \n");
    printf("	kromosom XX, jika salah satu kromosom X-nya mengalami gangguan, masih ada \n");
    printf("	satu kromosom X lagi sehingga ia hanya menjadi pembawa sifat (carrier) buta \n");
    printf("	warna.\n\n");

    // THALASEMIA
    printf("4.THALASSEMIA\n");
    printf("	Thalassemia adalah kelainan darah yang diturunkan dari orangtua. Thalassemia \n");
    printf("menyebabkan pengidapnya kekurangan darah atau anemia. Gejala yang dialami \n");
    printf("pengidap thalassemia adalah cepat Lelah, mudah mengantuk, dan sesak napas. \n");
    printf("Gejala ini biasa terjadi pada saat 2 tahun pertama kehidupan. \n");
    printf("Berdasarkan penyakit ini, seseorang dapat dikelompokan menjadi 3 golongan yaitu:\n");

    printf("	Thalassemia minor: Tidak parah, anemia bisa tidak terjadi\n");
	printf("	Thalassemia mayor: Kekurangan darah yang parah, dapat merusak organ tubuh dan \n");
    printf("	mengakibatkan kematian.\n");
    printf("	Normal: Orang yang normal tidak terjangkit dan aman dari kedua jenis Thalassemia.\n");
    printf("	Thalassemia adalah kelainan genetik yang berkepanjangan sehingga perawatan perlu \n");
    printf("dilakukan seumur hidup. Pengidap thalassemia akan banyak melakukan transfuse \n");
    printf("darah untuk menambah sel darah yang kurang. Pada thalassemia minor hanya perlu \n");
    printf("melakukan transfusi darah pada saat kondisi tertentu saja, sedangkan pada \n");
    printf("thalassemia mayor biasanya akan dianjurkan untuk melakukan transplantasi \n");
    printf("sumsum tulang.  \n\n");

    //ALBINO
	printf("5.ALBINO\n");
    printf("	Albino adalah kondisi yang disebabkan kurangnya melanin dalam tubuh. \n");
    printf("Biasa pengidap albino memiliki warna rambut dan kulit yang putih atau pucat. \n");
    printf("Melanin adalah pigmen yang akan menentukan warna rambut, kulit, dan mata. \n");
    printf("Melanin juga berperan dalam perkembangan saraf optic sehingga penderita albino \n");
    printf("seringkali mengalami sedikit masalah penglihatan. \n");
    printf("Berdasarkan penyakit ini, seseorang dapat dikelompokan menjadi 3 golongan yaitu:\n");
    printf("	- Normal\n");
    printf("	  Warna kulit seusai dengan ras dan tidak terlalu pucat\n");
    printf("	- Mengidap\n");
    printf("	  Warna rambut, kulit, dan mata terlihat lebih pucat daripada orang biasa\n");
    printf("	- Carrier\n");
    printf("	  Seorang anak terlahir dengan albino karena mewarisi satu atau lebih \n");
    printf("	  gen albino dari orang tuanya. Sama seperti kasus-kasus sebelumnya, mereka secara \n");
    printf("	  fisik akan sehat tapi mereka bisa menularkan penyakit pada keturunannya. Untuk \n");
    printf("	  albino, kondisi carrier tidak hanya bisa terjadi pada perempuan saja tetapi juga bisa \n");
    printf("	  terjadi pada laki-laki.\n");
    printf(" 	Dalam kasus umum dari oculocutaneous albinism, kedua orang tua pasti \n");
    printf("membawa gen albino sehingga menyebabkan anak albino.\n");
    printf("\n");
    printf("=====================================================================================================================\n");
    
    int input;
    printf("Tekan tombol enter jika sudah selesai membaca.\n");
    getchar();
    scanf("%[^\n]",input);
}

void credits(){
	system("CLS");
	printf("88888   888    8     8   88888  8      8   8                       88      8888                       8888\n");
	printf("8      8   8  8 8   8 8    8    8      8   8                        88    888888                     888888\n");
	printf("88888  88888  8  8 8  8    8    8       8 8                          88   888888                     888888\n");
	printf("8      8   8  8   8   8    8    8        8                            88   8888                      888888\n");
	printf("8      8   8  8       8  88888  88888    8                             888888888888               888888888888\n");
	printf("                                                                         88888888 88             88 88888888 88\n");
	printf(" 8888   888   8888   88888                                               88888888  88    888    88  88888888  88\n");
	printf("8      8   8  8   8  8                                                   88888888   88  88888  88    888888    88\n");
	printf("8      88888  8888   888                                                 88888888    88  888  88     888888     88\n");
	printf("8      8   8  8  8   8                                                   88888888     888888888     88888888\n");
	printf(" 8888  8   8  8   8  88888                                               888  888    8 8888888 8   8888888888\n");
	printf("                                                                         888  888    8 8888888 8  88888888888\n");
	printf(" 8888   888   8       8888  8   8  8       888   88888   888   8888      888  888    8 8888888 8  888888888888\n");
	printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8   8     888  888      88   88    888888888888\n");
	printf("8      88888  8      8      8   8  8      88888    8    8   8  8888      888  888      88   88       88  88\n");
	printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8  8      888  888      88   88       88  88\n");
	printf(" 8888  8   8  88888   8888   888   88888  8   8    8     888   8   8     888  888      88   88       88  88\n");
	printf("=====================================================================================================================\n");
	printf("                            CODEWIZARD-ADMANTIUM FANS CLUB UNIT\n");
	printf("\n");
	printf("                                       Group Leader\n");
	printf("                                  Arrick Russell Adinoto\n");
	printf("\n");
	printf("                               Engineer & Backend Specialist\n");
	printf("                                     Abraham Rumondor\n");
	printf("                                  Arrick Russell Adinoto\n");
	printf("\n");
	printf("                              Designer & Frontend Specialist\n");
	printf("                                    Michael Nathaniel\n");
	printf("\n");
	printf("                                          Coder\n");
	printf("                                      David Timothy\n");
	printf("                                       Dimas Idham\n");
	printf("                                     Abraham Rumondor\n");
	printf("                                  Arrick Russell Adinoto\n");
	printf("\n");
	printf("                                       Group Speaker\n");
	printf("                                     Michael Nathaniel\n");
	printf("\n");
	printf("                                        Researcher\n");
	printf("                                      David Timothy\n");
	printf("                                       Dimas Idham\n");
	printf("\n");
	printf("                                         Writer\n");
	printf("                                      David Timothy\n");
	printf("                                       Dimas Idham\n");
	printf("\n");
	printf("                                      SPECIAL THANKS:\n");
	printf("\n");
	printf("           88                                     8888     8      88\n");
	printf("           88                                     8888    88      88\n");
	printf("           88                                             88      88\n");
	printf("  88888    88       88888      88888      88888    88   888888    88 88888    88 888  8888\n");
	printf("88     88  88     88     88  88     88  88     88  88     88      888    88   888   88    88\n");
	printf("       88  88     88     88  88     88  88         88     88      88      88  88    88    88\n");
	printf("888888888  88     88     88  88     88  88         88     88      88      88  88    88    88\n");
	printf("88    888  88     88     88  88     88  88         88      88     88      88  88    88    88\n");
	printf("888888 88  88888   88888888   888888    88         88       8888  88      88  88    88    88\n");
	printf("                         88\n");
	printf("                         88  888888888888888888888888888888888888888888888888888888888888888\n");
	printf("                  88     88\n");
	printf("                    88888    8888    888    888  8888888   8888   8888   88       88  88888\n");
	printf("                             8   8  8   8  8   8    8     8      8    8  8 8     8 8  8    8\n");
	printf("                             8888   8   8  8   8    8     8      888888  8  8   8  8  88888\n");
	printf("                             8   8  8   8  8   8    8     8      8    8  8   8 8   8  8\n");
	printf("                             8888    888    888     8      8888  8    8  8    8    8  8\n");
	printf("\n");
	printf("=====================================================================================================================\n");
	int input;
    printf("Tekan tombol enter jika sudah selesai membaca.\n");
    getchar();
    scanf("%[^\n]",input);
	
	
}




//INT MAIN ADALAH TAMPILAN HALAMAN PERTAMA
int main(){	
	int input=-1;
	while(input!=5){
		input=-1;
		while(input<1||input>5){
			system("CLS");
			printf("88888   888    8     8   88888  8      8   8                       88      8888                       8888\n");
			printf("8      8   8  8 8   8 8    8    8      8   8                        88    888888                     888888\n");
			printf("88888  88888  8  8 8  8    8    8       8 8                          88   888888                     888888\n");
			printf("8      8   8  8   8   8    8    8        8                            88   8888                      888888\n");
			printf("8      8   8  8       8  88888  88888    8                             888888888888               888888888888\n");
			printf("                                                                         88888888 88             88 88888888 88\n");
			printf(" 8888   888   8888   88888                                               88888888  88    888    88  88888888  88\n");
			printf("8      8   8  8   8  8                                                   88888888   88  88888  88    888888    88\n");
			printf("8      88888  8888   888                                                 88888888    88  888  88     888888     88\n");
			printf("8      8   8  8  8   8                                                   88888888     888888888     88888888\n");
			printf(" 8888  8   8  8   8  88888                                               888  888    8 8888888 8   8888888888\n");
			printf("                                                                         888  888    8 8888888 8  88888888888\n");
			printf(" 8888   888   8       8888  8   8  8       888   88888   888   8888      888  888    8 8888888 8  888888888888\n");
			printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8   8     888  888      88   88    888888888888\n");
			printf("8      88888  8      8      8   8  8      88888    8    8   8  8888      888  888      88   88       88  88\n");
			printf("8      8   8  8      8      8   8  8      8   8    8    8   8  8  8      888  888      88   88       88  88\n");
			printf(" 8888  8   8  88888   8888   888   88888  8   8    8     888   8   8     888  888      88   88       88  88\n");
			printf("=====================================================================================================================\n");
			printf("\n");
			printf("1.Start\n");
			printf("2.Daftar Penyakit\n");
			printf("3.About This App\n");
			printf("4.Credits\n");
			printf("5.Exit\n");
			printf("\n");
			printf("=====================================================================================================================\n");
			printf("Silahkan Pilih Opsi Anda:\n");
	
			//VARIABEL UNTUK MENENTUKAN KEMANA PROGRA BERJALAN
			scanf("%d",&input);
			getchar();
		}
		if(input==1)start();
		else if(input==3)about_this_app();
		else if(input==2)daftar_penyakit();
		else if(input==4)credits();
		//else if(input==3);//about_this_app();{
	}
	system("CLS");
	return 0;
}
