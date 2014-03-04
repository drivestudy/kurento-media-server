/* Autogenerated with Kurento Idl */

#include "MediaType.hpp"
#include <JsonSerializer.hpp>

namespace kurento {


} /* kurento */

void
Serialize(std::shared_ptr<kurento::MediaType>& object, JsonSerializer& s)
{
  if (s.IsWriter && object) {
    Json::Value v (object->getString() );

    s.JsonValue = v;
  } else {
    object.reset (new kurento::MediaType(s.JsonValue.asString()));
  }
}