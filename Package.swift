// swift-tools-version: 6.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "WebexSDK_SPM",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "WebexSDK_SPM",
            targets: ["WebexSDK"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "WebexSDK",
            path: "Frameworks/WebexSDK.xcframework"
        ),
        .target(
            name: "WebexSDK_SPM",
            dependencies: ["WebexSDK"],
            path: "Sources/WebexSDK_SPM"
        )
    ]
)
