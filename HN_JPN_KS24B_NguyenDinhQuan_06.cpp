#include<stdio.h>

int main(){
	int arr[100];
	int lua_chon;
	int n;
	
	printf(" --Menu--");
	printf("1.Nhap so phan tu va gia tri cho mang \n");
	printf("2.In ra gia tri các phan tu trong mang (arr[0] = 1, arr[1] = 5 …) \n");
	printf("3.Ðem so luong cac so hoan hao co trong mang. Biet so hoan hao la so co tung cac uoc bang chinh no \n");
	printf("4.Tim gia tri nho thu 2 trong mang, khong duoc sap xep mang");
	printf("5.Them mot phan tu vao vi tri ngau nhien trong  mang, phan tu moi và vitri them vao mang phai do nguoi dung nhap vao. Chi them phan tu do vao mang neu phan tu do chua ton tai trong mang \n");
	printf("6.Xoa phan tu tai mot vi tri cu the \n");
	printf("7.Sap xep mang theo thu tu tang dan \n");
	printf("8.Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ten tai trong mang hay khong \n");
	printf("9.Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so le dung truoc, so chan dung sau \n");
	printf("10.Kiem tra xem mang co phai mang tang dan hay khong \n");
	printf("11.Thoat khoi chuong trinh \n");
	
	printf("Lua chon cua ban : ");
    scanf("%d", &lua_chon);
    
    switch(lua_chon){
    	
    	case1:{
    		printf("Nhap so phan tu cua mang :");
		    scanf("%d", &n);
		
		if(n > 100 ){
			printf("Gia tri ban nhap khong hop le. ");
		}else{
			for (int i = 0; i < n; i++) {
            printf("Nhap gia tri cho phan tu %d: ", i + 1);
            scanf("%d", &arr[i]);
             }
	    }
	    break;
		}
		case 2:{
			for (int i = 0; i < n; i++)
			printf("Gia tri trong mang arr[%d] = %d \n", i, arr[i]);
			break;
		}
		case 3:{

			break;
		}
		case 4:{
			
			break;
		}
		case 5:{
			int num, so;
                printf("Nhap gia tri can them: ");
                scanf("%d", &num);
                printf("Nhap vi tri can them: ");
                scanf("%d", &so);

                if (so < 0 || so > n || n >= 100) {
                    printf("Vi tri khong hop le hoac mang day.\n");
                } else {
                    for (int i = n; i > so; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[so] = num;
                    n++;
                }
			break;
		}
		case 6:{
			int so;
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &so);
                if (so < 0 || so >= n) {
                    printf("Vi tri khong hop le.\n");
                } else {
                    for (int i = so; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                }
			break;
		}
		case 7:{
			
			break;
		}
		case 8:{
			 int so, a = 0;
                printf("Nhap gia tri can tim: ");
                scanf("%d", &so);
                for (int i = 0; i < n; i++) {
                    if (arr[i] == so) {
                        printf("Phan tu %d ton tai o vi tri %d\n", so, i);
                        a= 1;
                        break;
                    }
                }
                if (!a) printf("Khong tim thay phaan tu.\n");
			break;
		}
		case 9:{
			
			break;
		}
		case 10:{
			
			break;
		}
		case 11:{
			printf("thoat khoi chuong trinh ");
			break;
		}
	}
    
    return 0;
}
