// swift-tools-version: 6.0.0
import PackageDescription

let package = Package(
    name: "WebexSDK_SPM",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "WebexSDK_SPM",
            targets: ["WebexSDK_SPM"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "WebexSDK",
            path: "./Frameworks/WebexSDK.xcframework"
        ),
        .target(
            name: "WebexSDK_SPM",
            dependencies: ["WebexSDK"],
            path: "./Sources"
        )
    ]
)
