Phạm Thị Diễm Trinh
### Báo cáo học Array
[1.Array](#Array)  
[2.Mảng một chiều](#motchieu)  
[3.Mảng hai chiều](#haichieu)  


<a name="Array"></a>
## 1. Array

**Cú pháp :**  
 `<kiểu dữ liệu> <tên mảng> <danh sách chiều của mảng>`  
**Ví dụ :**
- `int A[100]` : mảng một chiều gồm có 100 phần tử kiểu số nguyên.  
- `float B[2][3]` : mảng hai chiều có 2 dòng, 3cột kiểu số thực 

**Lưu ý:**
- Các phần tử trong một mảng phải cùng kiểu dữ liệu.

<a name="motchieu"></a>
## 2. Mảng một chiều
#### *2.1 Cú pháp khai báo:*  
 
 `kiểu_dữ_liệu tên_mảng [số_phần_tử]` 
 
**Trong đó:** số_phần_tử là số lượng tối các phần tử đa có thể lưu trữ.

**Vídụ:**
  ` int ia[10]`
  - mảng ia có 10 phần tử kiểu số nguyên
  
  ![](http://tuhocanninhmang.com/files/array1.png)  
  
#### *2.2 Cách tổ chức* 
 
  - Mỗi phần tử được cấp một ô nhớ trong một dãy liền kề và có trật tự nhất định. 
  - Chỉ số đầu tiên bắt đầu bằng số 0
  - cách tổ chức phần từ như sau:
  
  ![](http://tuhocanninhmang.com/files/array2.png)
  
#### *2.3 Khởi tạo và truy xuất*
- Cách 1: có thể khởi tạo giá trị ngay khi khai báo   
  **Cú pháp :**  
  `kiểu_dữ_liệu   tên_mảng[số_phần_tử_của_mảng] = {danh_sách_các_giá_trị_khởi_tạo};`   
   Khi khai báo mảng có khởi tạo giá trị thì có thể không cần chỉ ra số phần tử mảng  
  
  **Ví dụ:**  
  `int a[10] = {7,4,10,15,90,30,3,21,56,80};`  
   Hoặc  
   `int a[] = {7,4,10,15,90,30,3,21,56,80};`(không khai báo số lượng phần tử tối đa)  

- Cách 2: duyệt lần lượt tới từng phần tử và nhập bằng một vòng For  
   **Ví dụ:**
    `For (i=0,i<10,i++) scanf("%d",&a[i]);`  
     Và nhập lần lượt từng phần tử: {7,4,10,15,90,30,3,21,56,80}   
     
**Lưu ý:** cả hai cách nhập đều cho cùng một kết quả:  

![](https://sites.google.com/site/huynhtantaisd/_/rsrc/1364235526717/thuthuat/lap-trinh-c-c/mang-mang-mot-chieu/mang-mot-chieu.gif)

- Cách truy xuất : Tên_Mảng[chỉ số]  
    **Ví Dụ :** từ mảng vừa nhập phía trên, nếu thực hiện:
    ` b=a[3]`: nghĩa là giá trị ứng với phần tử có chỉ số là 3 trong mảng a sẽ được gán cho b; khi đó b=15;
  
#### *2.4 Cách sắp xếp và tìm kiếm trên mảng 1 chiều*
Trên thực tế, người mới nhập môn lập trình không cần phải quá quan tâm đến các thuật toán tìm kiếm và sắp xếp quá phức tạp (rất dễ bị nhầm lẫn, loạn suy ngĩ), chỉ nên tham khảo các thuật toán đơn giản như : sắp xếp nổi bọt, sắp xếp lựa chọn, quickshort, tìm kiếm tuần tự (có thể xem thêm tìm kiếm nhị phân vì khá dễ hiểu và đơn giản)  

**Một số thuật sắp xếp:** (có thể tham khảo tại đây)  
https://voer.edu.vn/c/cac-phuong-phap-sap-xep-co-ban/7c75a38d/6885d36d  
**Một số thuật tìm kiếm:** (tham khảo tại đây)  
http://mis.uel.edu.vn/forum/index.php?threads/coffee-thu%E1%BA%ACt-to%C3%81n-t%C3%8Cm-ki%E1%BA%BEm-tr%C3%8An-m%E1%BA%A2ng.145/

<a name="haichieu"></a>
## 3. Mảng hai chiều
#### *3.1 Cú pháp khai báo:*  
 
 `kiểu_dữ_liệu tên_mảng [spt1][spt2]`  
 
**Trong đó:** 
- các phần tử được bố trí theo ma trận
- spt1 là số phần tử chiều 1 (số dòng) 
- spt2 số phần tử chiều 2 (số cột)  
**Vídụ:**
  ` int ia[5][10]`
    mảng ia có 50 phần tử kiểu số nguyên
    
  ![](http://tuhocanninhmang.com/images/array1.png)  
  
#### *3.2 Cách tổ chức* 

  - có thể hiểu các phần tử lập thành một ma trận. Khi lưu trữ trong bộ nhớ máy sẽ được chuyển về dưới dạng của mảng 1 chiều.
  - Chỉ số đầu tiên của hàng (cột)  bắt đầu bằng số 0, kết thúc bằng số hàng (số cột) -1
  - cách tổ chức phần từ như sau:
  
  ![](https://www.stdio.vn/statics/external_data/files/pages/articles/2015/150/content/ss_2.png)
  
#### *3.3 Khởi tạo và truy xuất*
- Cách 1: có thể khởi tạo giá trị ngay khi khai báo   
 **Cú pháp :**  
  kiểu_dữ_liệu   tên_mảng[spt1][spt2] = {danh_sách_các_giá_trị_khởi_tạo};     
  **Vídụ:**  
`int a[3][4] = {2,3,9,4,5,6,7,6,2,9,4,7};`
- Cách 2: duyệt lần lượt tới từng phần tử và nhập bằng hai vòng For  
   **Ví dụ:**
  `for (i = 0; i < 3; i++)
   for (j = 0; j < 4; j++)
  scanf("%d", &ia[i][j]);
`
    Và nhập lần lượt từng phần tử: {2,3,9,4,5,6,7,6,2,9,4,7};  
**Lưu ý:** cả hai cách nhập đều cho cùng một kết quả:

![](http://www.oktot.com/wp-content/uploads/2016/04/image006-5.jpg)
  
 - Cách truy xuất : Tên_Mảng[chỉ số dòng][chỉ số cột]
 **Ví Dụ :** từ mảng vừa nhập phía trên, nếu thực hiện:  
  ` b=a[0][0]`: nghĩa là giá trị ứng với phần tử có chỉ số dòng là 0, chỉ số cột là 0 trong mảng a sẽ được gán cho b; khi đó b=2;
 
