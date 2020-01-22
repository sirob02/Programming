public class main {


    public static void main(String[] args) {
        animal animal =new animal("Animal",3,100);
        dog dog = new dog("doggo",  1,10,1,2);


        animal.eat();
        System.out.println("Animal size:" + animal.getSize());

        dog.eat();
        System.out.println("dog size:" + dog.getSize());



    }
}
