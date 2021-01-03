#ifndef JSON_H
#define JSON_H
#include <string>
#include <vector>
namespace JSON {
enum type { Null, Number, String, Object };
class Value {
  type _type = JSON::Null;  //默认值
  union {
    double num;  //所有数字都用浮点数代表
    std::string str;
    std::vector<std::pair<std::string, Value>> obj;  //多叉树
  };
  //实现正确的析构和构造函数
};
};  // namespace JSON
#endif JSON_H