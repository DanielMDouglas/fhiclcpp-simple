#ifndef FHICLCPP_SIMPLE_FHICLCPP_MAKE_PARAMETER_SET_H_SEEN
#define FHICLCPP_SIMPLE_FHICLCPP_MAKE_PARAMETER_SET_H_SEEN

#include "fhiclcpp/ParameterSet.h"
#include "recursive_build_fhicl.hxx"

namespace fhicl {

ParameterSet make_ParameterSet(std::string const &filename) {
  ParameterSet prolog;
  ParameterSet working_doc;

  fhicl::fhicl_doc doc = fhicl::read_doc(filename);
  doc.resolve_includes();

  return recursive_build_fhicl(doc);
}
} // namespace fhicl

#endif
