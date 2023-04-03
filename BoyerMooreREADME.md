# BoyerMooreAlgoritmas-

 Bir metinde string aranması sırasında en çok kullanılan arama algoritmalarındandır.
AMAÇ=Boyer-Moore algoritmasındaki amaç aranan metinde bütün harfleri teker teker kontrol edip linear search ‘den daha iyi sonuç elde etmektir.
Çalışma Şekli: Boyer Moore algoritmasında ilk olarak aranan kelimedeki harflerin kaçıncı konumda oldukları bulunur. Aranan kelimenin uzunluğu kadar atlanır ve eğer metindeki mevcut konumda harf uyuyorsa bir önceki harfe bakılır, eğer uymuyorsa metinden alınan harfin aranan metinde kaçıncı harf olduğuna bakılarak aranan boyundan bu sayı eksiği kadar ileri atılır.
ÇALIŞMA ZAMANI: En kötü durum olarak bir metinde sürekli tekrar eden harf kümesinin bulunmasıdır. Örneğin elimde sssssssssssss şeklinde bir metin olsun ve bunun içerisinde ssd ‘nin aranması gibi. Bu durumda en kötü zaman karmaşıklığı O(n*m) dir.
En iyi durum için aranan harfin metinde olmaması durumudur. Bu durumda en iyi zaman karmaşıklığı O(n) olacaktır.
Boyer-Moore algoritması good-suffix ve bad character kurallarına göre işler
Good-Suffix: Arama yapılacak metin olan text ve aranılacak kelime, yani karakter dizisi pattern vardır. Sondan başa doğru metin ve aranan kelimede eşleşme durumuna bakılır eşleşen kısım işin good-suffix yani iyi son ek denilmektedir. Birbiri ile uyuşmayan yerlere ise mismatch denilmektedir. 
İlk aramada uyuşmayan kısım ortaya çıktığında soldan sağa bakılır uyuşan kısım ile aynı olan harf var mı diye eğer varsa kaydırma yapılır.
Eğer good-suffix, patter’ın hiçbir yerinde geçmiyorsa, pattern good-suffix’ten sonrasına kadar kaydırılabilir.
Bir metinde arama yapmak için kullanılabilecek algoritmalar:
#Boyer-Moore ALgoritması
#Horspool Arama Algoritması
#A* Arama Algoritması
  
