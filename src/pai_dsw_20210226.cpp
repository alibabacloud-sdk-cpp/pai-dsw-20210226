// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/pai_dsw_20210226.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Pai-dsw20210226;

Alibabacloud_Pai-dsw20210226::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("pai-dsw"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Pai-dsw20210226::Client::getEndpoint(shared_ptr<string> productId,
                                                         shared_ptr<string> regionId,
                                                         shared_ptr<string> endpointRule,
                                                         shared_ptr<string> network,
                                                         shared_ptr<string> suffix,
                                                         shared_ptr<map<string, string>> endpointMap,
                                                         shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

CreateInstanceResponse Alibabacloud_Pai-dsw20210226::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInstanceWithOptions(request, headers, runtime);
}

CreateInstanceResponse Alibabacloud_Pai-dsw20210226::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<Dataset>>(request->datasetList)) {
    body->insert(pair<string, vector<Dataset>>("DatasetList", *request->datasetList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsSpec)) {
    body->insert(pair<string, string>("EcsSpec", *request->ecsSpec));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->environments)) {
    body->insert(pair<string, map<string, boost::any>>("Environments", *request->environments));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    body->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    body->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    body->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isPublic)) {
    body->insert(pair<string, long>("IsPublic", *request->isPublic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nasFileSystemId)) {
    body->insert(pair<string, string>("NasFileSystemId", *request->nasFileSystemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<UserVpc>(request->userVpc)) {
    body->insert(pair<string, UserVpc>("UserVpc", *request->userVpc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstance"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInstanceResponse(callApi(params, req, runtime));
}

CreateInstanceShutdownTimerResponse Alibabacloud_Pai-dsw20210226::Client::createInstanceShutdownTimer(shared_ptr<string> InstanceId, shared_ptr<CreateInstanceShutdownTimerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInstanceShutdownTimerWithOptions(InstanceId, request, headers, runtime);
}

CreateInstanceShutdownTimerResponse Alibabacloud_Pai-dsw20210226::Client::createInstanceShutdownTimerWithOptions(shared_ptr<string> InstanceId,
                                                                                                                 shared_ptr<CreateInstanceShutdownTimerRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleTime)) {
    body->insert(pair<string, string>("ScheduleTime", *request->scheduleTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttlInMillis)) {
    body->insert(pair<string, long>("TtlInMillis", *request->ttlInMillis));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstanceShutdownTimer"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(*InstanceId) + string("/shutdownTimer"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInstanceShutdownTimerResponse(callApi(params, req, runtime));
}

CreateInstanceSnapshotResponse Alibabacloud_Pai-dsw20210226::Client::createInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<CreateInstanceSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInstanceSnapshotWithOptions(InstanceId, request, headers, runtime);
}

CreateInstanceSnapshotResponse Alibabacloud_Pai-dsw20210226::Client::createInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<CreateInstanceSnapshotRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceSnapshotDescription)) {
    body->insert(pair<string, string>("InstanceSnapshotDescription", *request->instanceSnapshotDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceSnapshotName)) {
    body->insert(pair<string, string>("InstanceSnapshotName", *request->instanceSnapshotName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceSnapshotRepoUrl)) {
    body->insert(pair<string, string>("InstanceSnapshotRepoUrl", *request->instanceSnapshotRepoUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstanceSnapshot"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(*InstanceId) + string("/snapshots"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInstanceSnapshotResponse(callApi(params, req, runtime));
}

DeleteInstanceResponse Alibabacloud_Pai-dsw20210226::Client::deleteInstance(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteInstanceWithOptions(InstanceId, headers, runtime);
}

DeleteInstanceResponse Alibabacloud_Pai-dsw20210226::Client::deleteInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInstance"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(*InstanceId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInstanceResponse(callApi(params, req, runtime));
}

DeleteInstanceShutdownTimerResponse Alibabacloud_Pai-dsw20210226::Client::deleteInstanceShutdownTimer(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteInstanceShutdownTimerWithOptions(InstanceId, headers, runtime);
}

DeleteInstanceShutdownTimerResponse Alibabacloud_Pai-dsw20210226::Client::deleteInstanceShutdownTimerWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInstanceShutdownTimer"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(*InstanceId) + string("/shutdownTimer"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInstanceShutdownTimerResponse(callApi(params, req, runtime));
}

DeleteInstanceSnapshotResponse Alibabacloud_Pai-dsw20210226::Client::deleteInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<string> InstanceSnapshotId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteInstanceSnapshotWithOptions(InstanceId, InstanceSnapshotId, headers, runtime);
}

DeleteInstanceSnapshotResponse Alibabacloud_Pai-dsw20210226::Client::deleteInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<string> InstanceSnapshotId,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  InstanceSnapshotId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceSnapshotId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInstanceSnapshot"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(*InstanceId) + string("/snapshots/") + string(*InstanceSnapshotId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInstanceSnapshotResponse(callApi(params, req, runtime));
}

GetAuthorizationResponse Alibabacloud_Pai-dsw20210226::Client::getAuthorization() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAuthorizationWithOptions(headers, runtime);
}

GetAuthorizationResponse Alibabacloud_Pai-dsw20210226::Client::getAuthorizationWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAuthorization"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/authorization"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAuthorizationResponse(callApi(params, req, runtime));
}

GetDashboardStatisticsResponse Alibabacloud_Pai-dsw20210226::Client::getDashboardStatistics(shared_ptr<GetDashboardStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDashboardStatisticsWithOptions(request, headers, runtime);
}

GetDashboardStatisticsResponse Alibabacloud_Pai-dsw20210226::Client::getDashboardStatisticsWithOptions(shared_ptr<GetDashboardStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDashboardStatistics"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/statistics/dashboard"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDashboardStatisticsResponse(callApi(params, req, runtime));
}

GetInstanceResponse Alibabacloud_Pai-dsw20210226::Client::getInstance(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceWithOptions(InstanceId, headers, runtime);
}

GetInstanceResponse Alibabacloud_Pai-dsw20210226::Client::getInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstance"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(*InstanceId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceResponse(callApi(params, req, runtime));
}

GetInstanceShutdownTimerResponse Alibabacloud_Pai-dsw20210226::Client::getInstanceShutdownTimer(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceShutdownTimerWithOptions(InstanceId, headers, runtime);
}

GetInstanceShutdownTimerResponse Alibabacloud_Pai-dsw20210226::Client::getInstanceShutdownTimerWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceShutdownTimer"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(*InstanceId) + string("/shutdownTimer"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceShutdownTimerResponse(callApi(params, req, runtime));
}

GetInstanceSnapshotResponse Alibabacloud_Pai-dsw20210226::Client::getInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<string> InstanceSnapshotId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceSnapshotWithOptions(InstanceId, InstanceSnapshotId, headers, runtime);
}

GetInstanceSnapshotResponse Alibabacloud_Pai-dsw20210226::Client::getInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                                                                 shared_ptr<string> InstanceSnapshotId,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  InstanceSnapshotId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceSnapshotId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceSnapshot"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(*InstanceId) + string("/snapshots/") + string(*InstanceSnapshotId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceSnapshotResponse(callApi(params, req, runtime));
}

GetInstancesStatisticsResponse Alibabacloud_Pai-dsw20210226::Client::getInstancesStatistics(shared_ptr<GetInstancesStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstancesStatisticsWithOptions(request, headers, runtime);
}

GetInstancesStatisticsResponse Alibabacloud_Pai-dsw20210226::Client::getInstancesStatisticsWithOptions(shared_ptr<GetInstancesStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceIds)) {
    query->insert(pair<string, string>("WorkspaceIds", *request->workspaceIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstancesStatistics"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/statistics/instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstancesStatisticsResponse(callApi(params, req, runtime));
}

ListEcsSpecsResponse Alibabacloud_Pai-dsw20210226::Client::listEcsSpecs(shared_ptr<ListEcsSpecsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEcsSpecsWithOptions(request, headers, runtime);
}

ListEcsSpecsResponse Alibabacloud_Pai-dsw20210226::Client::listEcsSpecsWithOptions(shared_ptr<ListEcsSpecsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorTypeEquals)) {
    query->insert(pair<string, string>("AcceleratorTypeEquals", *request->acceleratorTypeEquals));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEcsSpecs"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/ecsSpecs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEcsSpecsResponse(callApi(params, req, runtime));
}

ListImagesResponse Alibabacloud_Pai-dsw20210226::Client::listImages(shared_ptr<ListImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listImagesWithOptions(request, headers, runtime);
}

ListImagesResponse Alibabacloud_Pai-dsw20210226::Client::listImagesWithOptions(shared_ptr<ListImagesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceleratorTypeEquals)) {
    query->insert(pair<string, string>("AcceleratorTypeEquals", *request->acceleratorTypeEquals));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageNameContains)) {
    query->insert(pair<string, string>("ImageNameContains", *request->imageNameContains));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageTypeEquals)) {
    query->insert(pair<string, string>("ImageTypeEquals", *request->imageTypeEquals));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListImages"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/images"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListImagesResponse(callApi(params, req, runtime));
}

ListInstanceSnapshotsResponse Alibabacloud_Pai-dsw20210226::Client::listInstanceSnapshots(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstanceSnapshotsWithOptions(InstanceId, headers, runtime);
}

ListInstanceSnapshotsResponse Alibabacloud_Pai-dsw20210226::Client::listInstanceSnapshotsWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceSnapshots"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(*InstanceId) + string("/snapshots"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceSnapshotsResponse(callApi(params, req, runtime));
}

ListInstancesResponse Alibabacloud_Pai-dsw20210226::Client::listInstances(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstancesWithOptions(request, headers, runtime);
}

ListInstancesResponse Alibabacloud_Pai-dsw20210226::Client::listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->inWorkspace)) {
    query->insert(pair<string, bool>("InWorkspace", *request->inWorkspace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceNameContains)) {
    query->insert(pair<string, string>("InstanceNameContains", *request->instanceNameContains));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceStatusEquals)) {
    query->insert(pair<string, string>("InstanceStatusEquals", *request->instanceStatusEquals));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceIdEquals)) {
    query->insert(pair<string, string>("WorkspaceIdEquals", *request->workspaceIdEquals));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstances"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstancesResponse(callApi(params, req, runtime));
}

ListInstancesStatusResponse Alibabacloud_Pai-dsw20210226::Client::listInstancesStatus(shared_ptr<ListInstancesStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstancesStatusWithOptions(request, headers, runtime);
}

ListInstancesStatusResponse Alibabacloud_Pai-dsw20210226::Client::listInstancesStatusWithOptions(shared_ptr<ListInstancesStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstancesStatus"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/statuses/instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstancesStatusResponse(callApi(params, req, runtime));
}

StartInstanceResponse Alibabacloud_Pai-dsw20210226::Client::startInstance(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startInstanceWithOptions(InstanceId, headers, runtime);
}

StartInstanceResponse Alibabacloud_Pai-dsw20210226::Client::startInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartInstance"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(*InstanceId) + string("/start"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartInstanceResponse(callApi(params, req, runtime));
}

StopInstanceResponse Alibabacloud_Pai-dsw20210226::Client::stopInstance(shared_ptr<string> InstanceId, shared_ptr<StopInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopInstanceWithOptions(InstanceId, request, headers, runtime);
}

StopInstanceResponse Alibabacloud_Pai-dsw20210226::Client::stopInstanceWithOptions(shared_ptr<string> InstanceId,
                                                                                   shared_ptr<StopInstanceRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->saveImage)) {
    query->insert(pair<string, bool>("SaveImage", *request->saveImage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopInstance"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(*InstanceId) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopInstanceResponse(callApi(params, req, runtime));
}

UpdateInstanceResponse Alibabacloud_Pai-dsw20210226::Client::updateInstance(shared_ptr<string> InstanceId, shared_ptr<UpdateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateInstanceWithOptions(InstanceId, request, headers, runtime);
}

UpdateInstanceResponse Alibabacloud_Pai-dsw20210226::Client::updateInstanceWithOptions(shared_ptr<string> InstanceId,
                                                                                       shared_ptr<UpdateInstanceRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    body->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstance"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(*InstanceId))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateInstanceResponse(callApi(params, req, runtime));
}

UpdateInstanceSnapshotResponse Alibabacloud_Pai-dsw20210226::Client::updateInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<string> InstanceSnapshotId, shared_ptr<UpdateInstanceSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateInstanceSnapshotWithOptions(InstanceId, InstanceSnapshotId, request, headers, runtime);
}

UpdateInstanceSnapshotResponse Alibabacloud_Pai-dsw20210226::Client::updateInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<string> InstanceSnapshotId,
                                                                                                       shared_ptr<UpdateInstanceSnapshotRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  InstanceSnapshotId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceSnapshotId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceSnapshotName)) {
    body->insert(pair<string, string>("InstanceSnapshotName", *request->instanceSnapshotName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstanceSnapshot"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(*InstanceId) + string("/snapshots/") + string(*InstanceSnapshotId))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateInstanceSnapshotResponse(callApi(params, req, runtime));
}

UpdateV3InstanceByUserResponse Alibabacloud_Pai-dsw20210226::Client::updateV3InstanceByUser(shared_ptr<UpdateV3InstanceByUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateV3InstanceByUserWithOptions(request, headers, runtime);
}

UpdateV3InstanceByUserResponse Alibabacloud_Pai-dsw20210226::Client::updateV3InstanceByUserWithOptions(shared_ptr<UpdateV3InstanceByUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateV3InstanceByUser"))},
    {"version", boost::any(string("2021-02-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/migrate/user"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateV3InstanceByUserResponse(callApi(params, req, runtime));
}

