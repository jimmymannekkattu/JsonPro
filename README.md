Need to add dependencies like curlpp curl  nlohmann json libraries

g++ -std=c++17 -Wall -I /home/jimmymannekkattu/projects/json/include main.cpp UIElement.cpp TextElement.cpp WebViewElement.cpp UIElementFactory.cpp Utility.cpp -lcurlpp -lcurl -o myapp
./myapp
