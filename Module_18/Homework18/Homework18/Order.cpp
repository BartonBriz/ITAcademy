#include "Order.h"



Order::Order(int num, double amount, Status status)
    : orderNumber(num), orderAmount(amount), orderStatus(status), orderDate(std::chrono::system_clock::now())
{
  
}

void Order::printOrder() const
{
	std::cout << "Order #" << orderNumber << ", Amount: " << orderAmount
		<< ", Status: " << statusToString(orderStatus) << std::endl;
}

void Order::Checkorder(const Order& b)
{
   /* std::vector<Order> orders = {
        Order(1, 250.75, Status::New),
        Order(2, 300.50, Status::Processing),
        Order(3, 199.99, Status::New),
        Order(4, 450.20, Status::Shipped),
        Order(5, 6000.00, Status::Processing),
        Order(6, 5500.00, Status::Processing)
    };
    */
    std::this_thread::sleep_for(std::chrono::seconds(6));
    auto now = std::chrono::system_clock::now();

    transform(order.begin(), order.end(), order.begin(),
        [&now](Order& order) -> Order {
            auto timePassed = std::chrono::duration_cast<std::chrono::seconds>(now - order.orderDate).count();

            if (order.orderStatus == Status::New && timePassed > 5) {
                order.orderStatus = Status::Processing;
            }
            return order;
        });

    for (const auto& order : order) {
        order.printOrder();
    }

    auto it = find_if(order.begin(), order.end(),
        [](const Order& order) {
            return order.orderAmount > 5000 && order.orderStatus == Status::Processing;
        });

    if (it != order.end()) {
        std::cout << "First order with amount > 5000 and status 'Processing':" << std::endl;
        std::cout << "Order #" << it->orderNumber << ", Amount: " << it->orderAmount << std::endl;
    }
    else {
        std::cout << "No orders found with amount > 5000 and status 'Processing'." << std::endl;
    }
    }

