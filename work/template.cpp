#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <array>
#include <deque>
#include <algorithm>
#include <utility>
#include <cstdint>
#include <functional>
#include <iomanip>
#include <numeric>
#include <sstream>

using std::string;
using std::vector;

${<if Problem.Description.Modulo}
  static constexpr int64_t MOD = ${Problem.Description.Modulo};
${<end}

struct ${ClassName} {
${<foreach Method.Params p}
  ${p.Type} ${p.Name};
${<end}
  ${Method.ReturnType} ${Method.Name}(${foreach Method.Params p , }${p.Type} ${p.Name}_${end}) {
    ${foreach Method.Params p , }${p.Name} = std::move(${p.Name}_)${end};
    return ${Method.ReturnType;zeroval};
  }
};

${CutBegin}
${<TestCode}
${CutEnd}