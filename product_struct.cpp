#include <iostream>
int obj_count = 0;
struct Product
{
    int Id;
    std::string name;
    double price;
    int quantity;
    void display_product()const
    {
        std::cout << "Product ID : " << Id << std::endl;
        std::cout << "Product name : " << name << std::endl;
        std::cout << "Product price : " << price << std::endl;
        std::cout << "Product quantity : " << quantity << std::endl;
    }
    void update_quantity(int& new_quantity)
    {

        quantity += new_quantity;
    }
    double calculate_total_price()const
    {
        if (quantity == 0)
        {
            std::cout << "You have no quantity, please enter quantity" << std::endl;
        }
        return price * quantity;
    }
};
Product* add_product(Product*& arr)
    {   
        if (arr == nullptr)
        {
            Product* products_arr = new Product[1];
            std::cout << "Enter the 1 product ID : ";
            std::cin >> products_arr[0].Id;
            std::cout << "Enter the 1 product name : ";
            std::cin >> products_arr[0].name;
            std::cout << "Enter the 1 product price : ";
            std::cin >> products_arr[0].price;
            std::cout << "Enter the 1 product quantity : ";
            std::cin >> products_arr[0].quantity;
            arr = products_arr;
            ++obj_count;
            return arr;
        }
        else
        {
            Product* products_arr = new Product[obj_count + 1];
            std::cout << "Enter the " << obj_count + 1 << " product ID : ";
            std::cin >> products_arr[obj_count].Id;
            std::cout << "Enter the " << obj_count + 1 << " product name : ";
            std::cin >> products_arr[obj_count].name;
            std::cout << "Enter the " << obj_count + 1 << " product price : ";
            std::cin >> products_arr[obj_count].price;
            std::cout << "Enter the " << obj_count + 1 << " product quantity : ";
            std::cin >> products_arr[obj_count].quantity;
            delete[] arr;
            arr = products_arr;
            products_arr = nullptr;
            ++obj_count;
            return arr;
        }
    }
int main()
{
    Product* products = nullptr;
    std::cout << "Welcome to your Inventory Management system" << std::endl;
    char choose;
    do{
        std::cout << "------------------" << std::endl 
                << "Option menu" << std::endl
                << "Enter A to add product" << std::endl
                << "Enter D to desplay product" << std::endl
                << "Enter C to calculate total price" << std::endl
                << "Enter U to update product quantity" << std::endl
                << "Enter X to exit program" << std::endl
                << "------------------" << std::endl;
        std::cin >> choose;
        switch (choose)
        {
        case 'A':
        case 'a':
            products = add_product(products);
            break;
        case 'D':
        case 'd':
            int tmp_id;
            std::cout << "Enter the product ID to display : ";
            std::cin >> tmp_id;
            if (products != nullptr && products[tmp_id - 1].Id == tmp_id)
            {
                products[tmp_id - 1].display_product();
            }
            else
            {
                std::cout << std::endl << "You have not product to display, "
                            "please enter product" << std::endl;
            }
            
            break;
        case 'C':
        case 'c':
            int id;
            std::cout << "Enter the product ID to calculate total price : ";
            std::cin >> id;
            if (products != nullptr && products[id - 1].Id == id)
            {
                std::cout << "Total price is : " 
                << products[id - 1].calculate_total_price() << std::endl;
            }
            else
            {
                std::cout << "You have not products, please add the product" << std::endl;
            }
            break;
        case 'U':
        case 'u':
            int t_id;
            std::cout << "Enter the product ID to update quantity : ";
            std::cin >> t_id;
            int new_quantity;
            std::cout << "Enter the new quantity : ";
            std::cin >> new_quantity;
            if (products != nullptr && products[t_id - 1].Id == t_id)
            {
                products[t_id - 1].update_quantity(new_quantity);
            }
            else
            {
                std::cout << "You have not products, please add the product" << std::endl;
            }
            break;
        case 'X':
        case 'x':
            std::cout << "Program exited" << std::endl;
            break;
        default:
            std::cout << "Please enter the valid option" << std::endl;
            break;
        }
    }while (choose != 'x' && choose != 'X');
    delete[] products;
}
