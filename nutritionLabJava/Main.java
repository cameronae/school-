import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Create a Scanner to read user input from the console
        Scanner scanner = new Scanner(System.in);

        // Read the name of the food item (first token)
        String itemName = scanner.next();

        // Check for the default "Water" case (case-insensitive)
        if (itemName.equalsIgnoreCase("Water")) {
            // Use the default FoodItem constructor ("Water", 0, 0, 0)
            FoodItem foodItem = new FoodItem();

            // Print nutrition info and calories for 1 serving
            foodItem.printInfo();
            System.out.printf("Number of calories for %.2f serving(s): %.2f%n", 1.0, foodItem.getCalories(1.0));
        } else {
            // Read fat, carbs, protein, and number of servings
            double amountFat     = scanner.nextDouble();
            double amountCarbs   = scanner.nextDouble();
            double amountProtein = scanner.nextDouble();
            double numServings   = scanner.nextDouble();

            // Create a FoodItem with the provided values
            FoodItem foodItem = new FoodItem(itemName, amountFat, amountCarbs, amountProtein);

            // Print nutrition info and calories for 1 serving and for the entered number of servings
            foodItem.printInfo();
            System.out.printf("Number of calories for %.2f serving(s): %.2f%n", 1.0, foodItem.getCalories(1.0));
            System.out.printf("Number of calories for %.2f serving(s): %.2f%n", numServings, foodItem.getCalories(numServings));
        }

        // Close the scanner
        scanner.close();
    }
}