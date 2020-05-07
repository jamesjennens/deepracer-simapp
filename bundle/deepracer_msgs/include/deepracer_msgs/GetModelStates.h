// Generated by gencpp from file deepracer_msgs/GetModelStates.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_GETMODELSTATES_H
#define DEEPRACER_MSGS_MESSAGE_GETMODELSTATES_H

#include <ros/service_traits.h>


#include <deepracer_msgs/GetModelStatesRequest.h>
#include <deepracer_msgs/GetModelStatesResponse.h>


namespace deepracer_msgs
{

struct GetModelStates
{

typedef GetModelStatesRequest Request;
typedef GetModelStatesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetModelStates
} // namespace deepracer_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::deepracer_msgs::GetModelStates > {
  static const char* value()
  {
    return "9f134a35b2aed42d29e57ebae260d3d6";
  }

  static const char* value(const ::deepracer_msgs::GetModelStates&) { return value(); }
};

template<>
struct DataType< ::deepracer_msgs::GetModelStates > {
  static const char* value()
  {
    return "deepracer_msgs/GetModelStates";
  }

  static const char* value(const ::deepracer_msgs::GetModelStates&) { return value(); }
};


// service_traits::MD5Sum< ::deepracer_msgs::GetModelStatesRequest> should match 
// service_traits::MD5Sum< ::deepracer_msgs::GetModelStates > 
template<>
struct MD5Sum< ::deepracer_msgs::GetModelStatesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_msgs::GetModelStates >::value();
  }
  static const char* value(const ::deepracer_msgs::GetModelStatesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_msgs::GetModelStatesRequest> should match 
// service_traits::DataType< ::deepracer_msgs::GetModelStates > 
template<>
struct DataType< ::deepracer_msgs::GetModelStatesRequest>
{
  static const char* value()
  {
    return DataType< ::deepracer_msgs::GetModelStates >::value();
  }
  static const char* value(const ::deepracer_msgs::GetModelStatesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::deepracer_msgs::GetModelStatesResponse> should match 
// service_traits::MD5Sum< ::deepracer_msgs::GetModelStates > 
template<>
struct MD5Sum< ::deepracer_msgs::GetModelStatesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::deepracer_msgs::GetModelStates >::value();
  }
  static const char* value(const ::deepracer_msgs::GetModelStatesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::deepracer_msgs::GetModelStatesResponse> should match 
// service_traits::DataType< ::deepracer_msgs::GetModelStates > 
template<>
struct DataType< ::deepracer_msgs::GetModelStatesResponse>
{
  static const char* value()
  {
    return DataType< ::deepracer_msgs::GetModelStates >::value();
  }
  static const char* value(const ::deepracer_msgs::GetModelStatesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_GETMODELSTATES_H
