/******************************************************************************
 * Copyright (c) 2017 Philipp Schubert.
 * All rights reserved. This program and the accompanying materials are made
 * available under the terms of LICENSE.txt.
 *
 * Contributors:
 *     Philipp Schubert and others
 *****************************************************************************/

/*
 * Configuration.hh
 *
 *  Created on: 04.05.2017
 *      Author: philipp
 */

#ifndef SRC_UTILS_CONFIGURATION_H_
#define SRC_UTILS_CONFIGURATION_H_

#include <boost/program_options.hpp>
#include <string>
using namespace std;
namespace bpo = boost::program_options;

/// Stores the label/ tag with which we annotate the LLVM IR.
extern const string MetaDataKind;
/// Specifies the directory in which important configuration files are located.
extern const string ConfigurationDirectory;
/// Name of the file storing all glibc function names.
extern const string GLIBCFunctionListFileName;
/// Name of the file storing all LLVM intrinsic function names.
extern const string LLVMIntrinsicFunctionListFileName;
/// Name of the file storing all standard header search paths used for
/// compilation.
extern const string HeaderSearchPathsFileName;
/// Name of the compile_commands.json file (in case we wish to rename)
extern const string CompileCommandsJson;
/// Variables map of the parsed command-line parameters
extern bpo::variables_map VariablesMap;
/// Log file directory
extern const string LogFileDirectory;

#endif /* SRC_UTILS_CONFIGURATION_HH_ */
