package lab2;
public class Main {
    public static void main(String[] args) {
        Market market=new Market("Yildiz");
        market.addBasket("Basket-1");
        market.addBasket("Basket-2");
        
        Product a[]=new Product[6];
        a[0]=new Electronic(1,"Telefon",50);
        a[1]=new Electronic(6,"Bilgisayar",50);
        a[2]=new Electronic(2,"Hoparlör",50);
        a[3]=new Food(3,"Mercimek",50);
        a[4]=new Food(4,"Nohut",50);
        a[5]=new Food(5,"Fasulye",50);
 
        market.getBasket("Basket-1").addProduct(a[0]);
        market.getBasket("Basket-1").addProduct(a[1]);
        market.getBasket("Basket-1").addProduct(a[2]);        
        market.getBasket("Basket-1").addProduct(a[3]);
        market.getBasket("Basket-1").addProduct(a[4]);
        market.getBasket("Basket-1").addProduct(a[5]);
   
        market.identifyMarket();
        
        for(int i=0;i<a.length;i++){
            a[i].updatePrice();
        } 
        market.identifyMarket();
    }   
}
